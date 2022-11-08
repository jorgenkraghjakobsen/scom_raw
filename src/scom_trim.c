#include <mysql/mysql.h>
//#include <mysql/my_config.h>
//#include <mysql/my_global.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <fcntl.h>
#include <termios.h>


// Commandline interface for Merus Audio IC development
// Written by Jorgen Kragh Jakobsen, 2011-2012
// Prerelease under heavy development 
// Release canditate is version 1.0 with todo list: 
//   Help usage 
//     Missing format read and write 
//   Phaseout or limited windows compability
//   Bind to register databases for symbol access and commandline 
//   completion
//     if -db option (or inverted) scom checks for a .scom_db file holding link
//         or compleate register spec. 
// Rev. 1.02 4.12.2012,JKJ : Adding trim function to register write 
//                         : command : scom trim registername 


  
                        

#ifdef LINUX
  #include <ftdispi.h>
#endif


#ifdef WIN
  #include <windef.h>
  typedef struct OVERLAPPED
  { DWORD Internal;
    DWORD InternalHigh;
    DWORD Offset;
    DWORD OffsetHigh;
    HANDLE hEvent;
  } OVERLAPPED, *POVERLAPPED,*LPOVERLAPPED;
  #include "../lib/ftd2xx.h"
  static int ft_wait(FT_HANDLE *fc, unsigned char mask, unsigned char value, int maxtry);
  void sleep(unsigned int mseconds)
  {
    clock_t goal = mseconds + clock();
    while (goal > clock());
  }
#endif

 unsigned int debug = 0;					// Default debug level -d[0..9]
 
 typedef struct { 
   int adr;
   int pos;
   int size; 
 } reg_type ;     
 
int lookup(char *symbol, reg_type *reg)
{  if (debug) printf("MySQL client version: %s\n", mysql_get_client_info());
   unsigned char str[128];
   unsigned char line[128];
   unsigned char db_table[128];
   FILE *db_name;
   MYSQL *conn;
   MYSQL_RES *result;
   MYSQL_ROW row;
   int n,i;
   conn = mysql_init(NULL);
   if (conn == NULL) {
      printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
      exit(1);
   }
   if (mysql_real_connect(conn, "bmf", "jakobsen", 
          "merussql", NULL, 0, NULL, 0) == NULL) {
      printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
      exit(1);
   }
   mysql_query(conn, "use merus_ic_trunk");
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
	 printf(" echo \"ma12070_register_spec\" > .reg_db\n");
	 printf("\nBye\n");
	 exit(-1); 
   }  
   for (i=0;i<strlen(db_table);i++)
   { db_table[i] = (db_table[i] == ' ')? 0 : (db_table[i] == 10)? 0 : db_table[i];   
   }
   if (debug) printf(":%s:\n",db_table);
   
   
   sprintf(str,"select * from %s where name=\"%s\"",db_table,symbol);
   if (mysql_query(conn, str)) {
      printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
      exit(1);
   }
   result = mysql_store_result(conn);
   
   n = mysql_num_fields(result);
   
   if (row = mysql_fetch_row(result))
   { reg->adr = atoi(row[2]);
     reg->pos = atoi(row[3]);
	 reg->size = atoi(row[4]);
	 if (debug) printf("address:%d %d %d\n",reg->adr,reg->pos,reg->size); 
   } else
   { printf("Symbol not found in register db.\nBye");
     exit(0);
   }
   
   
}

int getch();
void  print_usage(void);
int   hex(unsigned char digit);
int   mbin(unsigned char digit);
void  tobin(unsigned char data);
long  getvalue(char *symbol);
double vref = 3.3;
int   adcraw;
int   adc = 0; 
long  spispeed = 2000000;

const double version                 = 0.2; 
const unsigned char release_note[40] = { "Added w and r by symbol" } ;  

const char space[] = " ";
const char clear[4] = { 0xff, 0xff, 0xff, 0xff };


int main(int argc, char **argv)
{
    #ifdef LINUX
	  struct ftdi_context    fc;
      struct ftdispi_context fsc;
    #endif


	#ifdef WIN
	  FT_HANDLE fc;
    #endif
    FILE *fp;
	unsigned char cmdarg[128][128];
	unsigned char cmdline[128] = "";
    unsigned char wbuf[256] = "";
  	unsigned char rbuf[256] = "";
    unsigned int regval;
    unsigned int dac;
	unsigned char umask;
	unsigned char mask;
	int error = 0;
	int i,j,n,narg,nw,nc,nr;
    unsigned int adr;
    unsigned int data;
    unsigned int gdon, gdoff;
	unsigned int pos = 0;
	unsigned int size = 0 ;
	// Commmand line parsing and default values
											// Print version -v[0..1]  -v  Version string 
											//                         -v0 Version nr only
											   
    unsigned char cmd[128];
    reg_type reg;  
	unsigned int val;
	unsigned int output_format = 0;			// Output format default Hex, -d dec. -b binary
    int on,trimval,key,init=1; 
   
	nw   = 2; nr = 0;
    narg = 1;

	if (argc == 1) print_usage();
    while (narg < argc)
	{ if (strncmp(argv[narg],"-o",2)==0)    // Other output format 
	  { if (argv[narg][2] == 'b') 			// Binary output format
	    { output_format = 2; 
		  narg++; 
		}
	    else if (argv[narg][2] == 'd')      // Decimal output format
		{ output_format = 1;
		  narg++;
		} 
	  }
	  else if (strncmp(argv[narg],"-d",2)==0)   // Debug set optional debug level  
	  { if (strlen(argv[narg]) == 3)
	      debug = argv[narg][2] - 0x30;
		else
		  debug = 1;
	    if ((debug<=0) || (debug>=10))
		{ printf("Arg error: debug value out of range\n");
		  exit(0);
		}
        narg++;
	  }
	  else if (strncmp(argv[narg],"-v",2)==0)   // Print version info 
	  { if (strlen(argv[narg]) == 3)
	    {
		  if (argv[narg][2] == '0')
		  { printf("%1.02f",version);
		  }
		  else if (argv[narg][2] == '1')
		  { printf("%s",release_note);
		  }
		  exit(0);
		}
		else 
		{ printf("scom version %1.02f - %s\n",version,release_note);
		  exit(0); 
		}
	  }
	  else
	  {
	    strcat(cmdline,argv[narg++]);
		strcat(cmdline,space);
	  }
	}

	if (debug)
	{ printf("Commandline    : %s\n",cmdline);
	  printf("Outputformat   : %d\n",output_format);
	  printf("Debug level    : %d\n",debug);
	}

	// Parse and index command string
	i=0;j=0;
	for (n=0;n<strlen(cmdline);n++)
	{ cmdarg[i][j++] = cmdline[n];
	  if (cmdline[n] == ' ')
	  { cmdarg[i][j-1] = 0;i++;j=0; }
	  narg = i;
	}

	if (debug)
	{ printf("Command args  %d : ",i);
	  for (j=0;j<i;j++)
	    printf("%s ",cmdarg[j]);
	  printf("\n");
	}
    // Check valid commands and parameter combination.  
	
	switch (cmdarg[0][0])
	{
	  case 'w' : adr = getvalue(cmdarg[1]);
	   			 if (adr == -1)                   // adr parameter is not a numeric value 
				 { lookup(cmdarg[1],&reg);       // check if symbol is a valid signal name in database and return register stuf in reg
				   sprintf(cmd,"scom r %d",reg.adr); 
				   fp = popen(cmd,"r"); 
				   fscanf(fp,"%x",&regval);
				   pclose(fp);
				   if (debug) 
				   { printf("in write symbol func: reg:%d value:%d\n ",reg.adr,regval); }     
				   wbuf[0] = 0x02;				// single write 
				   wbuf[1] = reg.adr; 
				   val = getvalue(cmdarg[2]);
				   umask = ((1<<reg.size)-1)<<reg.pos; 
				   umask = 0xff & ~umask; 				   
				   wbuf[2] = (regval & umask) | (val<<reg.pos) ;
				   nw = 3;
				 }
				 else 
				 { wbuf[1] = adr;
				   i = 0;
				   while (narg > i+2)
				   { wbuf[2+i] = getvalue(cmdarg[2+i]);
				     i++;
				   }
				   wbuf[0] = 0x02 + ((i-1)<<5);
	               nw = i+2;
				 }
				 break;
	  case 'r' : adr = getvalue(cmdarg[1]);
	   			 if (adr == -1 )
				 { lookup(cmdarg[1],&reg); 
	               adr = reg.adr;
				   pos = reg.pos;
				   size = reg.size;   		
 				 } 
				 wbuf[1] = adr;
				 if (narg > 2)
				 { nr = getvalue(cmdarg[2]);
				 }
				 else
				   nr = 1;
				 wbuf[0] = 0x01 + ((nr-1)<<5);
				 nw = 2;
				 break;
	  case 'b'  : adr = getvalue(cmdarg[1]);
	             nr = 0;
				 nw = 1;
				 wbuf[0] = 0x04 | adr<<3; 
	             break;
	  case 'u'  : adr = getvalue(cmdarg[1]);
	             nr = 0;
				 nw = 1;
				 wbuf[0] = 0x00 | adr<<3;
				 break; 
	  case 'c'  : nr = 0;
	             nw = 1;
				 wbuf[0] = 0xff;
				 break; 	 		  			 
	  case 'a'  : nr = 3; 
	              wbuf[0] = 0;       // Adde adc channel 
		          nw = 1;  
		          adc = 1; 
		          break;
	  case 't'  : if (cmdarg[0][1] == 0) 
	              {  nr = 0;
	                 nw = 2;
				     dac = getvalue(cmdarg[1]);
				     if (dac>4095)
				     { printf("DAC range 0-4095 \n");
				       exit(1);
				     } 
				     wbuf[0] = 0x30 + dac/256;
				     wbuf[1] = dac%256 ;
				  }
				  else 
				  { // Get register position, address and pressent value 
				    // Enter a loop where value can be trimmed like. 
					    
				    adr = getvalue(cmdarg[1]);
	   			    if (adr == -1)                   // adr parameter is not a numeric value 
				    { lookup(cmdarg[1],&reg);       // check if symbol is a valid signal name in database and return register stuf in reg
				      sprintf(cmd,"scom r %d",reg.adr); 
				      fp = popen(cmd,"r"); 
				      fscanf(fp,"%x",&regval);
				      pclose(fp);
					  mask = ((1<<reg.size)-1)<<reg.pos; 
				      umask = 0xff & ~mask; 				   
				      trimval = (regval & mask)>>reg.pos; 
				      if (debug) 
				      { printf("in write symbol func: reg:%d value:%d  symbol value:%d\n ",reg.adr,regval,val); }     
				      on = 1; key = 0;
					  while (on)
					  { printf("\n%s>",cmdarg[1]);
	                    if (init == 1) { init = 0; key = 'a'; } else { key = getch(); }
                        if (key == 27) { key = getch(); if (key==27){on=0; break;} key = getch(); }
                        switch (key)
                        {   case '+' :  if ( trimval <  ((1<<reg.size)-1) ) 
						                {  trimval = trimval + 1; 
										   sprintf(cmd,"scom w %d 0x%02x",reg.adr, (regval & umask) | (trimval<<reg.pos) );  
										   system(cmd);
										} 
                                        break;
	                        case '-' :  if ( trimval > 0 ) 
						                {  trimval = trimval - 1; 
										   sprintf(cmd,"scom w %d 0x%02x",reg.adr, (regval & umask) | (trimval<<reg.pos) );  
										   system(cmd);
										} 
                                        break;
							default  :  break;
						
						}	   			  
					    printf("%d",trimval);      
				        fflush(stdin);
						
					  }					  
	                        
				    }
				    exit(0); 
				  }				  
				  break; 
	  case 'd'  : spispeed = 4000000;
	              adr  = getvalue(cmdarg[1]);
	              data = getvalue(cmdarg[2]);
				  n    = getvalue(cmdarg[3]);
				  gdoff = data | 0xc0; 
				  gdon  = data;
				  for (i=0;i<n;i++) 
				  {  wbuf[i*6] = 0x02;
	                 wbuf[i*6+1] = adr;
	                 wbuf[i*6+2] = gdoff;
	                 wbuf[i*6+3] = 0x02;
               	     wbuf[i*6+4] = adr;
	                 wbuf[i*6+5] = gdon;
				  }
				  nw = n*6;
				 break;   
	  default  : break;

	}
	

	if (debug)
	{ printf("Write string    :");
	  for (i=0;i<nw;i++)
	    printf("%02x ",wbuf[i]);
	  printf("\n");
	  printf("Byte to write   : %d\n",nw);
	}

#ifdef LINUX
    if (ftdi_init(&fc) < 0)
    {
        fprintf(stderr, "ftdi_init failed\n");
        return 1;
    }

    i = ftdi_usb_open_desc(&fc, 0x0403, 0x6010,NULL, NULL);
    if (i < 0 && i != -5)
    { fprintf(stderr,"OPEN: %s\n",ftdi_get_error_string(&fc));
      exit(-1);
    }
    ftdispi_open(&fsc, &fc, INTERFACE_A);
    ftdispi_setmode(&fsc, 1, 0, 0, 0, 0, 0);
    ftdispi_setclock(&fsc, spispeed );		// 100 min.
	
    ftdispi_setloopback(&fsc, 0);
	ftdispi_write_read(&fsc, wbuf, nw, rbuf, nr, 0);
	ftdispi_close(&fsc, 1);
#endif

#ifdef WIN

/* Shifting commands IN MPSSE Mode*/
#define MPSSE_WRITE_NEG 0x01   /* Write TDI/DO on negative TCK/SK edge*/
#define MPSSE_BITMODE   0x02   /* Write bits, not bytes */
#define MPSSE_READ_NEG  0x04   /* Sample TDO/DI on negative TCK/SK edge */
#define MPSSE_LSB       0x08   /* LSB first */
#define MPSSE_DO_WRITE  0x10   /* Write TDI/DO */
#define MPSSE_DO_READ   0x20   /* Read TDO/DI */
#define MPSSE_WRITE_TMS 0x40   /* Write TMS/CS */

/* FTDI MPSSE commands */
#define SET_BITS_LOW   0x80    /*BYTE DATA*/ /*BYTE Direction*/
#define SET_BITS_HIGH  0x82    /*BYTE DATA*/ /*BYTE Direction*/
#define GET_BITS_LOW   0x81
#define GET_BITS_HIGH  0x83
#define LOOPBACK_START 0x84
#define LOOPBACK_END   0x85
#define TCK_DIVISOR    0x86    /* Value Low */ /* Value HIGH */ /*rate is 12000000/((1+value)*2) */
#define DIV_VALUE(rate) (rate > 6000000)?0:((6000000/rate -1) > 0xffff)? 0xffff: (6000000/rate -1)

/* Commands in MPSSE and Host Emulation Mode */
#define SEND_IMMEDIATE 0x87
#define WAIT_ON_HIGH   0x88
#define WAIT_ON_LOW    0x89

/* Commands in Host Emulation Mode */
#define READ_SHORT     0x90    /* Address_Low */
#define READ_EXTENDED  0x91    /* Address High */ /* Address Low  */
#define WRITE_SHORT    0x92    /* Address_Low */
#define WRITE_EXTENDED 0x93    /* Address High */ /* Address Low  */

# define FTDISPI_ERROR_NONE 0
   /** @brief returned when a function is called with a non/bad init context */
# define FTDISPI_ERROR_CTX -1
   /** @brief returned when a command is imposible */
# define FTDISPI_ERROR_CMD -2
   /** @brief returned on allocation problems */
# define FTDISPI_ERROR_MEM -3
   /** @brief returned on libftdi error */
# define FTDISPI_ERROR_LIB -4
   /** @brief returned on clock error */
# define FTDISPI_ERROR_CLK -5
   /** @brief returned on timeout error */
# define FTDISPI_ERROR_TO  -6

# define CLOCK_MAX_SPEEDX5 30000000 /**< @brief Clock max speed in Hz for H class device */
# define CLOCK_MAX_SPEED    6000000 /**< @brief Clock max speed in Hz */
# define CLOCK_MIN_SPEED        100 /**< @brief Clock min speed in Hz */

# define FTDISPI_GPO0 0x10 /**< @brief General Purpose Output bits 0 (D4) */
# define FTDISPI_GPO1 0x20 /**< @brief General Purpose Output bits 1 (D5) */
# define FTDISPI_GPO2 0x40 /**< @brief General Purpose Output bits 2 (D6) */
# define FTDISPI_GPO3 0x80 /**< @brief General Purpose Output bits 3 (D7) */

#define BBMODE_NORMAL 1
#define BBMODE_SPI    2

/* Clock X5 Command for H class component */
#define TCK_X5 0x8a

#define BIT_P_CS 0x08
#define BIT_P_DI 0x04
#define BIT_P_DO 0x02
#define BIT_P_SK 0x01
#define BIT_P_G0 FTDISPI_GPO0
#define BIT_P_G1 FTDISPI_GPO1
#define BIT_P_G2 FTDISPI_GPO2
#define BIT_P_G3 FTDISPI_GPO3
#define BIT_P_GX (FTDISPI_GPO0|FTDISPI_GPO1|FTDISPI_GPO2|FTDISPI_GPO3)

#define BIT_DIR (BIT_P_SK|BIT_P_DO|BIT_P_CS|BIT_P_G0|BIT_P_G1|BIT_P_G2|BIT_P_G3)

#define SPI_MAX_MSG_SIZE (64*1024)
#define DEFAULT_MEM_SIZE ((SPI_MAX_MSG_SIZE) + 9)


#define RETRY_MAX       10
#define RETRY_TIME      1000

    unsigned char    wr_cmd;  /**< @brief write command */
    unsigned char    rd_cmd;  /**< @brief read command */
    unsigned char    bitini;  /**< @brief initial states of all bits */
    unsigned char    mem[1024];    /**< @brief memory region for write and read */
    DWORD bw,btr,br;

    // open device and basic setup...
    i = FT_Open(0,&fc);
    if ( i > 0 ) 
	{ error = i; }
//    i = FT_OpenEx("USB Serial Converter A",FT_OPEN_BY_DESCRIPTION,&fc);
  //  i = FT_OpenEx("Dual RS232-HS A",FT_OPEN_BY_DESCRIPTION,&fc);
    if (debug) printf("open FT : %d\n",i);

//    i= FT_ResetDevice(fc);
//	if (debug) printf("Reset : %d\n",i);

//    i= FT_SetUSBParameters(fc, 64000,64000);
//	if (debug) printf("Set Trunk size : %d\n",i);

//    i= FT_SetLatencyTimer(fc, 0x01);
//    if (debug) printf("Set Letency : %d\n",i);

//    i = FT_SetFlowControl(fc, FT_FLOW_RTS_CTS, 0, 0);
//    if (debug) printf("Set flow  : %d\n",i);

//    i = FT_SetBitMode(fc, 0x00, 0x00);		// Serial MPSSE;
//    if (debug) printf("Reset Controller: %d\n",i);

    i = FT_SetBitMode(fc, 0x00, 0x02);		// Serial MPSSE;
    if (debug) printf("Set MPSSE mode: %d\n",i);
//    sleep(1);

    // Setup clock divid-er
    unsigned int div = 0x05DB;		// 1 MHz SPI clock
    mem[0] = TCK_DIVISOR;
	mem[1] = (div >> 0) & 0xFF;
    mem[2] = (div >> 8) & 0xFF;
    if (debug) printf("Debug (Set div): %02x %02x %02x\n",mem[0],mem[1],mem[2]);
    i = FT_Write(fc, mem, 3, &bw );
    if (debug) printf("Set divider : %d\n",i);

    if (debug)
    {  // Check Loopback
       mem[0] = 0x84;
       i = FT_Write(fc,mem,1, &bw);
       i = FT_GetQueueStatus(fc,&bw);
       if (bw != 0)
      {
         printf("Not empty ......%d \n",i);
      }
      printf("Loopback test ok\n");

      // Force error
      mem[0] = 0xAB;
    	i = FT_Write(fc,mem,1, &bw);
      do
      { i = FT_GetQueueStatus(fc,&btr);
      } while ( (btr==0)&&(i==0));
      int commandok = 0;
      i = FT_Read(fc,&rbuf,btr,&br);
      printf("status:%d ntr:%d nr:%d buffer:%02x %02x %02x \n",i,btr,br,rbuf[0],rbuf[1],rbuf[2]);

      // Exit loopback
      mem[0] = 0x85;
      i = FT_Write(fc,mem,1, &bw);
      printf("Set loopback off:  %d\n",i);
    }

    wr_cmd = MPSSE_DO_WRITE | MPSSE_WRITE_NEG;
    rd_cmd = MPSSE_DO_READ; //  | MPSSE_READ_NEG;
    bitini = BIT_P_CS;

    wr_cmd &= ~MPSSE_LSB;
    rd_cmd &= ~MPSSE_LSB;

    mem[0] = SET_BITS_LOW;
    mem[1] = bitini;
    mem[2] = BIT_DIR;
    if (debug) printf("Debug (WR init): %02x %02x %02x\n",mem[0],mem[1],mem[2]);
    i = FT_Write(fc, mem, 3, &bw );
    if (debug) printf("Set WR INI : %d\n",i);
    //i = FT_Write(fc, mem, 3, &bw );
    //printf("Set WR INI : %d\n",i);
    i = ft_wait(fc,BIT_P_CS|BIT_P_GX,bitini,RETRY_MAX);
    if (debug) printf("Wait WR INI : %d\n",i);

    // Write Read operation
    i = 0;
	mem[i++] = SET_BITS_LOW;
	mem[i++] = (0x0F & (bitini ^ BIT_P_CS));
	mem[i++] = BIT_DIR;
    mem[i++] = wr_cmd;
    mem[i++] = nw-1;
	mem[i++] = 0;
    for (j=0;j<nw;j++)
	{ if (debug) printf("\n%02x ",wbuf[j]);
	  mem[j+i] = wbuf[j];
    }
	i = i+j;
	if (nr)
	{ mem[i++] = rd_cmd;
	  mem[i++] = nr-1;
	  mem[i++] = 0;
      FT_Write(fc,mem,i,&bw);
      for(n=0;n<nr;)
      { FT_Read(fc,rbuf+n,nr-n,&br);
        n += br;
 	  }
      i=0;
    }
	mem[i++] = SET_BITS_LOW;
	mem[i++] = bitini;
	mem[i++] = BIT_DIR;
	if (debug)
	{ printf("Write debug:");
	  for (j=0;j<i;j++) 
	    printf("%02x ",mem[j]);
	  printf("\n");
    }
	i = FT_Write(fc, mem, i, &bw );
    if (debug) printf("Write error = %d %d\n",i, bw);
    ft_wait(fc,BIT_P_CS, bitini, RETRY_MAX);

    FT_Close(fc);
#endif

    if (size > 0)
    { if (debug)
	  { printf("Size:%d  Pos:%d \n", size, pos);
	    printf("Mask: %02x \n",((1<<size)-1) );
		printf("Mask shifted: %02x \n",(((1<<size)-1)<<pos));
	  } 
	  rbuf[0] = (rbuf[0] & (((1<<size)-1)<<pos))>>pos ;    
	}
	
    if (adc == 1)
    { // output ADC value scaled to 3.3 V
      adcraw = rbuf[1]*256 + rbuf[2];   
      printf("%1.3f (%04x)\n",vref*adcraw/4092, adcraw );
    }
    else 
	{ for (i=0;i<nr;i++)
	  { if ( output_format == 1 )
	      printf("%03d ",rbuf[i]);
	    else if (output_format == 2 )
		  tobin(rbuf[i]);
        else 
		  printf("%02x ",rbuf[i]);
   	  }
    }
    //printf("\n");
    return error;
    
}

#ifdef WIN
static int ft_wait( FT_HANDLE *fc, unsigned char mask, unsigned char value, int maxtry)
{ unsigned char cmd = GET_BITS_LOW;
  unsigned char ret = 0;
  DWORD bw,br;
  FT_Write(fc,&cmd,1,&bw);
  FT_Read(fc,&ret,1,&br);
  while (maxtry-- && (ret & mask) != (value & mask))
  {	sleep(RETRY_TIME);
  	FT_Write(fc,&cmd,1,&bw);
  	FT_Read(fc,&ret,1,&br);
  }
  if ((ret & mask) == (value & mask))
    return 0;
  else
    return -6;
}
#endif

void print_usage(void)
{
  printf("scom commandline interface for Merus Audio ClassD amplifier ICs.\n");
  printf("Written by Jorgen Kragh Jakobsen, 2010-2012, Merus Audio\n\n");
  printf("Version: %1.02f   Release note: %s\n",version, release_note);
  printf("\nUsage: \n");
  printf("scom <command> [adress|symbol] [[data] ...] [options]\n"); 
  printf("Basic commands:  w - Write to register in device\n");
  printf("                 r - Read from registers in device\n");
  printf("Special functions:\n");
  printf("                 d - Send request to issue a long start pulse to gatedriver\n");
  printf("                 b - Block SPI device \n"); 
  printf("                 u - Unblock SPI device \n"); 
  printf("                 -v[0-1] : Print version info -v0 version number only \n");
  printf("                                               -v1 Release note only \n");
  printf("Options:\n");
  printf("                 -d[0-9] : Enable debug level[0-9]\n");
  printf("                 -o[d|b] : Specify output format. Default Hex \n");
  printf("                                              -od Decimal\n");
  printf("                                              -ob Binary \n");
  exit(0);
}

long getvalue(char *symbol)
{  unsigned char *ptr = symbol;
   int j;
   long base, n, val = 0;

   if (*(ptr++) == '0')
   {  if ( *ptr == 'x' )
      {  ptr++;
         for (n = strlen(symbol)-2; n >= 1; n--)
         {  j = 0;
            val = val + hex(*ptr) * (0x01<<((n-1)*4)) ;
	    ptr++;
         }
         return val;
      }
      else if (*ptr == 'b' )
      { // printf("Conv bin %s\n",symbol);
         ptr++;
         for (n = strlen(symbol)-2; n >= 1; n--)
         {  j = 0;
          //  printf("\n%02x %c",val,mbin(*ptr));
            val = val + mbin(*ptr) * (0x01<<((n-1))) ;
	    ptr++;
         }
         return val;
      }
      else
      {  ptr = symbol;
         for (n = strlen(symbol); n >= 1 ;n--)
         { if (*ptr < 48 || *(ptr) > 57) return -1;
           ptr++;
         }
         return atoi(symbol);
      }

    }
    else
    { ptr = symbol;
      for (n = strlen(symbol); n >= 1 ;n--)
      { if (*ptr < 48 || *(ptr) > 57) return -1;
        ptr++;
      }
      return atoi(symbol);
    }
    return -1;
}



int hex(unsigned char digit)
{  if ( ((digit >=0x30) & (digit <= 0x39)) || ((digit >= 'a') & (digit <= 'f')) || ((digit >= 'A') & (digit <= 'F')) )
   {
     if (digit <= 0x39 )
     { return digit-0x30; }
     else if (digit <= 0x46)
     { return digit-0x41+10; }		// Capital case : A - F
     else
     { return digit-0x61+10; } 		// Low case 	: a - f
   }
   else
   {
      printf("Invalid coded hex digit. Exiting...");
      exit(1);
   }
}

int mbin(unsigned char digit)
{
  if (digit == '0')
  { return 0; }
  else if (digit == '1')
  { return 1; }
  else
  { printf("Invalid coded bin digit Exiting...\n");
    exit(1);
  }
}

void tobin(unsigned char data)
{
  static unsigned char bin_data[10];
  int n = 7;
  while(n>=0)
  {
    bin_data[n] = (data>=(1<<n))?'1':'0';
    data        =  data - ((data>=(1<<n)))*(1<<n);
    printf("%c",bin_data[n]);
    n--;
  }
}

int getch(){
  struct termios oldt, newt;
  int ch;
  tcgetattr( STDIN_FILENO, &oldt );
  newt = oldt;
  newt.c_lflag &= ~( ICANON | ECHO );
  tcsetattr( STDIN_FILENO, TCSANOW, &newt );
  ch = getchar();
  tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
  return ch;
}
  
