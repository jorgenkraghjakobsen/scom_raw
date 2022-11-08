/* Diff tool for ma120 device 
   Initial version feature set 
    - Only Raspberry pi support 
	- Dump script with minimum writering to get at pressent state.
	
   1. Parse commandline arguments 
   2. Read in current devcie content from segment Core, MLpin, DSP and OTP
   3. Compare to reset vector 
     3.1 Look up device by hwid and ajust for any changes. 
	 3.2   
   4. Print out differense. 
   5. Optinal lookup by address.         	  

   Commndline overwrites -i i2c address
                         -t database table 
						 
  
   Written by Jørgen Kragh Jakobsen, MerusAudio, April - 2018

   rev. 1/5 2018, JKJ : Added mysql interface for reverse lookup 
				 
				                                                                            */
// default -dbv 2 -t ma120_rev0 -i2c 0x20 
// Usage: scom_dif <command> 
// Commands :                					  

// Hardware opt outs 
// HWID 5-9 
// =========================================================
// 0x01cd  Read/write to register not implemented / error 
// 0x01ce  Read/write to register not implemented / error 
// 0x0258  Boot done bit. Marked as read/write in database
// 0x0509  MA_mlpin__mlp__sel        only bit 3 can be read back funky, reads 8 after boot  
// 0x050a  MA_mlpin__mlp__timeout    cannot be read. 0x3f after boot   
          
#include <stdio.h>
#include <stdlib.h> 
#include <stdint.h>
#include <string.h>  
#include <unistd.h>
#include <time.h>

#ifdef X86_LINUX
  #include <mariadb/mysql.h>   
  #include <ftdi.h>
  #include <ftdispi.h>
  struct ftdi_context    fc;
  struct ftdispi_context fsc;
#endif
 
#ifdef RPI 
  #include <mysql/mysql.h> 
#endif
   


typedef struct {
   unsigned char segment[16];    
   int address;
   int size;
   unsigned char type[16];
   unsigned char doc[1024]; 
} seg_type ;

typedef struct { 
   unsigned char name[128]; 
   unsigned char pos;
   unsigned char size; 
   unsigned char reset; 
} reg_type;     
   

#include "argparse.h"

#include <libscom2.h>			                    // Include x86/Raspberry i2c/spi communication 


#ifdef REV2
  #include "../include/ma120_rev2_all.h"        // Include full registermap symbols 
  unsigned char db_table[128] = "ma120_rev2";
#endif 

#ifdef REV1
  #include "../include/ma120_rev1_all.h"        // Include full registermap symbols 
  unsigned char db_table[128] = "ma120_rev1";
#endif 

#ifdef REV0
  #include "../include/ma120_rev0_all.h"        // Include full registermap symbols 
  unsigned char db_table[128] = "ma120_rev0";
#endif 

int com_i2c = -1; 
int debug = 0; 
unsigned char hwid_rev = 0;

 
int lookup_dif(unsigned char *dif_str, int addr, unsigned char value , unsigned char reset)
{  
   static seg_type seg_map[128]; 
   static int seg_map_loaded = 0; 
   static int seg_map_entries = 0;
   
   unsigned char str[256] = "";
   unsigned char this_type[16]; 
   int this_type_address;
   unsigned char this_segment[16];  
   int this_segment_offset;
   
   int i;
   MYSQL *conn;
   MYSQL_RES *result;
   MYSQL_ROW row;
   if (debug) 
     printf("Using database: %s \n",db_table);
   conn = mysql_init(NULL);
   mysql_real_connect(conn, "devrd-db.vih.infineon.com" , "merus_r01",
                             "1zqFkTgxGTYMg.U", NULL, 0, NULL, 0);  
   mysql_query(conn, "use merus");
   
   if (seg_map_loaded == 0) 
   { 
	 sprintf(str,"select * from sl_%s",db_table);
   
     if (mysql_query(conn, str)) {
       printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
       exit(1);
     }
     result = mysql_store_result(conn);
     mysql_num_fields(result);
     i = 0;
     while (row = mysql_fetch_row(result))
     {  
	   strcpy( seg_map[i].segment,row[1]);
	   seg_map[i].address = atoi(row[2]);
	   seg_map[i].size    = atoi(row[3]);
	   strcpy( seg_map[i].type,   row[6]);
	   
	   if (debug) { 
	     if (strcmp(row[1],row[6])==0)
	     { printf("Top segment %s address 0x%04x - 0x%04x : %s\n", row[1],atoi(row[2]),atoi(row[2])+atoi(row[3])-1,row[5]); 
	     } 
	     else 
	     { printf("Segment %s address 0x%04x - 0x%04x : %s\n", row[1],atoi(row[2]),atoi(row[2])+atoi(row[3])-1,row[5]); 
	     } 
       }
	   i++;
	 }
	 seg_map_entries = i; 
	 if (debug) printf("Segment map loaded, %d\n",i);    
	 seg_map_loaded = 1; 
   }
   
   // find type 
   for (i=0;i<=seg_map_entries;i++)
   {
     if (strcmp(seg_map[i].segment,seg_map[i].type)==0)
	 { //printf("."); 
	   if (addr >= seg_map[i].address & addr < (seg_map[i].address + seg_map[i].size)) 
	   { strcpy(this_type,seg_map[i].type);  
         this_type_address = seg_map[i].address;   
		 //printf("Found \n");
		 break; 	      
	   }        
	 }  
   }
   //printf(" %s ",this_type);
   
   int addr_offset = addr - this_type_address; 
   
   // find segment 
   for (i=0;i<=seg_map_entries;i++)
   { if (strcmp(seg_map[i].type,this_type)==0 & strcmp(seg_map[i].segment,this_type)!=0)
	 { //printf(".");
       if ((addr_offset >= seg_map[i].address) & (addr_offset < (seg_map[i].address + seg_map[i].size)))
	   { strcpy(this_segment,seg_map[i].segment);   
         this_segment_offset = seg_map[i].address;   
		 // printf("Found\n");
		 break; 	      
	   }        
	 }  
   }
   //printf(" %s ",this_segment);
    
   int addr_in_segment = addr_offset - this_segment_offset; 
   
   // printf("Lookup address : 0x%04x %s %s %x \n",addr, this_type, this_segment, addr_in_segment);
   // look up symbols base on type, segment and address
   
   sprintf(str,"select * from rs_%s where segmentType='%s' and segment='%s' and address='%d'",db_table,this_type,this_segment,addr_in_segment);
   if (debug) { printf("%s \n",str); } 
   if (mysql_query(conn, str)) {
     printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
     exit(1);
   }
   result = mysql_store_result(conn);
   mysql_num_fields(result);
   i = 0;
   unsigned int mask; 
   unsigned char spacer[64]; 
   unsigned char size, pos, sym_reset, sym_value;
   unsigned char reg_xor = value ^ reset;
   
   strcpy(dif_str,"");
   
   strcpy(spacer,"");
    
   while (row = mysql_fetch_row(result))
   { size      = atoi(row[5]);
	 sym_reset = atoi(row[6]); 
	 pos       = atoi(row[4]);
	 
	 mask      = (((1<<size)-1)<<pos);
	 sym_value = (value & mask)>>pos; 
//	 printf("Debug : %02x %02x \n",reg_xor, mask);
	 if (reg_xor & mask) 
	 { if (i==1)
	   { strcpy(spacer,"\n                      # "); }  
	   sprintf(dif_str,"%s%s %s.%s.%s=0x%02x (0x%02x)", dif_str,spacer, this_type, this_segment,row[2],sym_value, sym_reset);
	   i++; 
	    
	  // sprintf(dif_str,"%s%s.%s.%s pos:%d size:%d reset:%d mask:%02x %02x ",dif_str, this_type,this_segment,row[2], pos,size,sym_reset,mask,reg_xor );
     }
   }  
   //printf("%s",dif_str);
   mysql_close(conn);
   return 0;
}
		 
int get_db_reg(unsigned char *db_table)
{ FILE *db_fname;
  unsigned char line[256];
  db_fname = fopen(".reg_db", "r");
  if (db_fname != NULL)
  { while (fgets(line, 256, db_fname) != NULL )
    { strcpy(db_table,line);
	}
	fclose(db_fname);
  }
  else 
  { // Use default table name 
    strcpy(db_table,"ma120_rev0"); 
  } 
  if (debug) {
    printf("Database name : %s",db_table); 
  } 
  return 0;
}

int get_i2c_adr()
{  FILE *fh_com_i2c;
   fh_com_i2c = fopen(".com_i2c", "r");
   if (fh_com_i2c != NULL)
   { com_i2c = 1;
     fclose(fh_com_i2c);
   }
   return com_i2c; 
}

enum output_format_types { OUTPUT_SCOM, OUTPUT_SCOM_OTP, OUTPUT_ADR_VALUE };   
int output_format = OUTPUT_SCOM; 

static const char *const usage[] = { 
  "scom_dif <command> [options] [[--] args]",
  "scom_dif [options]", 
  NULL, };


int fd;							// global file handle for serial interface 
uint8_t i2c_adr = 0;            // 0: spi or i2c address (0x20-0x23)  used by lib_scom  
uint32_t speed;                 // default spi: 1 Mbps , i2c 400 Kbps

int main(int argc,const char **argv)
{ 
  int i2c = 0;  
  int db_version = 2;
  int hwid = 00; 
  unsigned char *database_table_name_commandline = NULL; 
  unsigned char *table_name;
  table_name = malloc(128);    
  struct argparse_option options[] = {
    OPT_HELP(),
	OPT_GROUP("Basic options"),
	OPT_INTEGER('d',"db_version",&db_version, "database version 1 or 2"),
	OPT_STRING('t',"database.table",&database_table_name_commandline, "Database and table name"),
	OPT_INTEGER('v',"verbose",&debug, "Debug switch verbose option"),
	OPT_INTEGER('o',"output_format",&output_format, "Output format 0:scom 1:addr,value "),
	OPT_INTEGER('i',"i2c",&i2c,"I2C address of device "),
	OPT_END(),
  };
  
  
  
  struct argparse argparse;
  argparse_init(&argparse, options, usage, 0);
  argc = argparse_parse(&argparse, argc, argv);
  
  // Handel I2C address : Get from .com_i2c or get from commandline or default 
  // ------------------------------------------------------------------------------------------ 
  int com_i2c = get_i2c_adr();
  if ( com_i2c >= 0x20 & (com_i2c <= 0x23) )
  { // I2C address specified by .com_i2c
    i2c_adr = com_i2c; 
    if (debug) { 
	  printf("I2C address set to 0x%02x by .com_i2c file\n",i2c_adr); 

	}    
  } else if ( i2c >= 0x20 && i2c <= 0x23 )
  {
    i2c_adr = i2c; 
	if (debug) {
	  printf("I2C address set to 0x%02x by -i2c switch\n",i2c_adr); 
	}
  } else 
  { i2c_adr = 0x20; 
	if (debug) {
	  printf("I2C address set to 0x%02x by default value\n",i2c_adr); 
	}
  } 


  // Handle database name: Get from .reg_db or commandline or default 
  // if graped from from file split /./ to database_name and table_name  
  // ------------------------------------------------------------------------------------------ 
  unsigned char *database_table_name_file = NULL; 
  database_table_name_file = malloc(256); 
  get_db_reg(database_table_name_file);
  
  if (database_table_name_commandline != NULL )
  { 
    strcpy(table_name, database_table_name_commandline); 
  }
  else 
  { 
    strcpy(table_name, database_table_name_file); // from file or default
  }
 
  if (debug) 
  { 
    printf("Database table name : %s\n",table_name); 
  }
      
   
  if (debug) { printf("Debug %d\n",debug); } 
   
  int fd;  
  fd = scom_open(I2C_BUS_1); 
  
  // Get hardware id from device 
  if (db_version == 1) 
  { printf("diff2 do not support ma120x0 generation use scom_dif\n");
    exit(1);
  }
  else 
  { unsigned char hwid_buf[2];
    unsigned char data[10];
	data[0] = 0; 
	com_i2c = 0x20; 
    if (debug) { printf("i2c_com : %02x\n",com_i2c); } 
	scom_w(fd,com_i2c,0x060c,data,1);
    scom_r(fd,com_i2c,0x060c,hwid_buf,1);
//  scom_w(fd,com_i2c,MA_acfg__avdd__hw_id__a,data,1);
//	scom_r(fd,com_i2c,MA_acfg__avdd__hw_id__a,hwid_buf,1);
	printf("#HardwareID : 0x%02x \n",hwid_buf[0]);
	hwid = hwid_buf[0]; 
	if ((hwid > 5) & (hwid < 0x14)) 
	{ hwid_rev = 0; 
	}
    else if ((hwid >= 21) & (hwid < 57))
	{ hwid_rev = 1;
	}
    else if ((hwid >= 57) & (hwid < 127))
	{ hwid_rev = 2;
	}
    printf("#Hardare rev : %d\n",hwid_rev);
  } 
  

  int MA120_map_device[0x600] = {0};  
  unsigned char buf[16];
  // Read in contents of device 
  for (int n = 0; n <= 0x5f; n++)
  { if (debug) 
    { printf("0x%02x0 : ",n); }
    scom_r(fd,com_i2c,n*16,buf,16); 
    if (debug) 
	{ printf("0x%04x : ",n*16); } 
	for (int i=0; i<=15;i++)
	{ MA120_map_device[n*16+i] = buf[i];
	  
	  if (debug) 
	    printf("%02x ",buf[i]);
	}
	if (debug) 
	printf("\n");
  } 	  
  unsigned char *dif_str;  
  dif_str = malloc(128);
  unsigned char *otp_opt_str;
  otp_opt_str = malloc(128);
  if (output_format == OUTPUT_SCOM_OTP) 
  { printf("# !!!!!!!!!!!!!!!!!!!!!!!!!!! Make sure PVDD 7V !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("# Write magic word to OTP lock register\n");
	printf("scom w 0x025f 0x4d\n");
  }  	 
  for (int n=0; n<=0x51f;n++ )
  { //printf("========================================================================================\n");
    //printf("Address : 0x%04x - Device/reset  : 0x%02x/0x%02x \n",n,MA120_map_device[n], MA120_reset[n]);
	if (MA120_reset[n] != MA120_map_device[n]) 
    { //printf("NOT Equal\n");
	  if (MA120_volatile[n] == 0) 
	  { // Handle exceptions 
	    if (hwid_rev == 0) { 
		  if (n == 0x01cd | n == 0x01ce | n == 0x258 | n == 0x0509 | n== 0x050a )
	      { if (debug) 
		    { printf("know exeption on ma120_rev0 address 0x%04x\n",n); }  
		    break;
		  }
		} else if (hwid_rev == 1) { 
		  if (n == 0x01cd | n == 0x01ce | n == 0x258 | n == 0x0509 | n== 0x050a )
	      { if (debug) 
		    { printf("know exeption on ma120_rev0 address 0x%04x\n",n); }  
		    break;
		  }
		} else if (hwid_rev == 2) {
		  
		} 
		 
		{ //printf("call lookup : %s , 0x%04x  0x%02x  0x%02x \n", dif_str, n, MA120_map_device[n], MA120_reset[n]);
		  lookup_dif( dif_str, n, MA120_map_device[n], MA120_reset[n]);
		   
		  switch (output_format) { 
		    case OUTPUT_SCOM | OUTPUT_SCOM_OTP: 
		        printf("scom w 0x%04x 0x%02x %s  # %s\n", n,MA120_map_device[n], otp_opt_str ,dif_str); 
		        break; 
		    case OUTPUT_ADR_VALUE : 
			    printf("0x%04x 0x%02x           # %s\n", n,MA120_map_device[n],dif_str); 
			    break; 
	      }		 									
	    }
	  }
	} 
  }  
}  
