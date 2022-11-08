#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql/mysql.h>
 
// Device register reset current script dif tool 
// Written by JKJ, 18.12.2014 - Merus Audio 

// Rev. 18.12.2014/JKJ : Initial release added to subversion  
// Rev. 21.5.2015/JKJ  : Adding symbol name of change symbols in dif output
// Rev. 25.2.2016/JKJ  : Make sure i2c is supported 

typedef struct {
   unsigned char name[128];    
   int adr;
   int pos;
   int size;
   int reset;
   unsigned char doc[1024]; 
} reg_type ;

void print_usage(void);
int load_database(void);  
int load_device_values(void);
void load_script(unsigned char *);
int compare_values( int );
// Global variable 
int com_i2c = -1; 
 

int get_i2c_adr()
{  FILE *fh_com_i2c;
   fh_com_i2c = fopen(".com_i2c", "r");
   if (fh_com_i2c != NULL)
   { com_i2c = 1;
     fclose(fh_com_i2c);
   }
   return com_i2c; 
}


int debug = 1;
int com_i2c; 
reg_type reg_db[1024];        
unsigned char reset_values[256];
unsigned int device_values[256];
unsigned int nsymbols;  


int main (int argc, char ** argv) 
{ 
  int com_i2c = get_i2c_adr();
  if (debug) { printf("search for i2c address %d \n",com_i2c); }
 
  if (debug) { printf("Loading database\n"); }
  load_database();  
  
  int compare_script = 0;
  int format = 0;   
  // parse commadline  
  // output format 
  if (argc > 1)
  { if (strcmp(argv[1],"-h")==0) 
    { print_usage();
      exit; 
    }
    else if (strcmp(argv[1],"-all")==0)
    { format = 1;
    }   
    else 
    {
      printf("Will pars input file %s\n", argv[1] );
      load_script(argv[1]); 
      compare_script = 1; 
    } 
  }
  
  // load reset values from database 
  //load_reset_values(&reset_values); 
  
  if (compare_script == 0 )
  { 
    load_device_values();   
  } else 
  { //load_script_values(&device_values);   
  }   
   
  compare_values(format);
  
  printf("Done\n");
  
}
 
int load_database(void)
{  FILE *db_name;
   unsigned char str[128];
   unsigned char line[128];
   unsigned char db_table[128];
   unsigned char mask, reset; 
  
   MYSQL *conn;
   MYSQL_RES *result;
   MYSQL_ROW row;
   int n,i,j;
   // Connect to db and select symbolname,address,size and pos from argument db_table
   db_name = fopen(".reg_db", "r");
   if (db_name != NULL)
   { while (fgets(line, 128,db_name) != NULL )
     { strcpy(db_table,line);
   }
   fclose(db_name);
   }
   else
   { printf("No database table in .reg_db in current dir\n\n");
     printf("To list table in database merus_ic_trunk, issue command:\n");
     printf(" marb list\n\n");
     printf("Put table into a file named .reg_db \nUse the oneliner: \n");
     printf(" echo \"ma12070_register_spec_rev4\" > .reg_db\n");
     printf("\nBye\n");
     exit(-1);
   }
   printf("Using database: %s \n",db_table);
   conn = mysql_init(NULL);
   mysql_real_connect(conn, "192.168.1.21", "jakobsen",
          "merussql", NULL, 0, NULL, 0);
   mysql_query(conn, "use merus_ic_trunk");
   
   sprintf(str,"select name,address,position,size,reset,description from %s",db_table);
   if (mysql_query(conn, str)) {
      printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
      exit(1);
   }
   result = mysql_store_result(conn);
   n = mysql_num_fields(result);
   i = 0;
   while (row = mysql_fetch_row(result))
   {  
     reg_db[i].adr = atoi(row[1]);
     reg_db[i].pos = atoi(row[2]);
     reg_db[i].size = atoi(row[3]);
     reg_db[i].reset = atoi(row[4]);     
     strcpy(reg_db[i].name,row[0]);
     strcpy(reg_db[i].doc,row[5]);
     if (debug > 1) 
     { printf("%03d %s \n",reg_db[i].adr, reg_db[i].name); 
     }
     i++;
   } 
   nsymbols = i;
   if (debug) { printf("\nDone loading %d symbols from database %s\n",nsymbols,db_table); } 
   for (j =0;j<256;j++)
   { reset_values[j] = 0; }     
   
   for (j = 0; j<i; j++ )
   { 
     reset = reg_db[j].reset<<reg_db[j].pos; 
     mask = 1<<reg_db[j].pos;
     mask = (unsigned char) ~mask;   
     reset_values[reg_db[j].adr] =  (reset_values[reg_db[j].adr] & mask) + reset; 
     if (debug>1) { 
       printf("adr:%d reset_shifted:%02x mask:%02x reg[%d]=%02x\n", reg_db[j].adr, reset, mask,reg_db[j].adr ,reset_values[reg_db[j].adr]); 
     }   
   }  
   if (debug) 
   { printf("Done updated reset values from symbols \n");
   }
   return nsymbols;
} 

int load_device_values(void)
{ 
   FILE *fp;
   unsigned int dummy;
   unsigned char cmd[128];
   int i,j; 
  
   for (i=0;i<128;i=i+4)
   { sprintf(cmd,"scom r %d 8",i); 
 
     fp = popen(cmd,"r");
     if (com_i2c < 0) 
	 {  fscanf(fp,"%x",&dummy);
     }
	 for (j=0;j<4;j++)
     { fscanf(fp,"%x",&device_values[i+j]);
       //printf("%02d %02x\n",i+j,device_values[i+j]);
	 } 
     pclose(fp);
   
   }
   if (debug) { printf("Done read values from device\n"); }
}

 
void load_script(unsigned char *script )
{  printf("Loading script:%s\n", script);
  
  
   printf(".....\n");
   printf("Done\n"); 
}


int compare_values(int format )
{ // format : 0 normal only display dif
  //          1 all    all values are displayed
  int i,j; 
  int max_adr = 96; 
  
  unsigned char mask, reset; 
  
  unsigned char symbol_dif[128] = "";
   
  printf(" Adr    : Reset  Device \n");
  printf("------------------------\n");

  for (i = 0;i<max_adr;i++)
  {
    if (format == 1)
    { printf(" %03d    : %02x     %02x    \n",i,reset_values[i],device_values[i]); 
    }
    else 
    { if (reset_values[i] != device_values[i]) 
      {
	    symbol_dif[0] = 0;
		//Look up symbols in given address and if not default print symbol name and new value
		
		//For each address find all symbols with given address
		for (j=0;j<nsymbols;j++)
		{ if (reg_db[j].adr == i) 
		  { // check if symbol value is different
		    reset = reg_db[j].reset<<reg_db[j].pos; 
            //printf("check: size 0x%02x \n",reg_db[j].size);
     		mask = ((1<<reg_db[j].size)-1)<<reg_db[j].pos;
            
			mask = (unsigned char) mask;   
            //printf("check: %s - mask 0x%02x \n",reg_db[j].name,mask);
			if ((reset_values[i]&mask) != (device_values[i]&mask))
			{ sprintf(symbol_dif, "%s %s=%d", symbol_dif, reg_db[j].name,(device_values[i]&mask)>>reg_db[j].pos); 
		    }
		  }
		}   
        printf(" %03d    : %02x     %02x    // %s\n",i,reset_values[i],device_values[i],symbol_dif); 
      }  
    }
  }  
  return 0;
  
}

 
void print_usage(void)
{ printf("Device register dif mapper\n");
  printf("Tool will do one of following sub commands:\n\n");
  printf("sdif -h              : Print help screen\n");
  printf("sdif [-all]          : Compare current device vs resetvalues and list dif.\n");
  printf("sdif script          : Compare value in script to resetvalues and list dif.\n");
  exit(0); 
}   
  
  
   
   
