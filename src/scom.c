
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <fcntl.h>
#include <dirent.h>

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
// Rev. 0.21  31.8.013,JKJ : Reduced SPI clock by 4 times
// Rev. 1.02 4.12.2012,JKJ : Adding trim function to register write
//                         : command : scom trim registername
// Rev. 18.12.2013,JKJ : Added range check on symbol write
// Rev. 16.11.2014,JKJ : Upgraded labmachines to 64 bit
//                       added switch to select open device by serial id
// Rev. 13.1.2015, JKJ : Added switch to dump database in format for gui tool
// Rev. 26.3.2015, JKJ : Added  i2c implementation. Selected by switch -i2c <address> or .com_i2c_<address>
//                       in current directory
// Rev. 7.4.2015,  JKJ : Added Raspberry pi support.
//                       Database ip hardcoded must be clevered switched
// Rev. 15.6.2015, JKJ : K-type temperature MAX31855 read out
//
// Rev. 5.8.2015, JKJ : Add Raspberry pi (-DARCH) i2c support
//                      - First try using wiringPi i2c implemention
// Rev. 20.9.2015, JKJ : Redo .reg_file functionality will source all .reg_file_<db_name> and flag if there is
//                       symbol slash
//                      - Add commandline swith to select a database to use
// Rev. 23.2.2017, JKJ : updated hardcoded ip to big.merus.lan
//
// Rev. 29.8.2017, JKJ : Added intel hex for i2c/spi write operations,
//                     : Major overall on build make flow reflected in source here
//                     : RPI = Raspberry pi , X86=desktop
// Rev. 12.9.2017, JKJ : Add commandline switch to select alternative i2c-0 device on raspberry pi
//                     : default i2c-1 or -i2c_dev 0
// Rev. 13.9.2017, JKJ : i2c now handled by ioctl normal read/write opertatoin - block/burts incluced
// Rev. 26.10.2017, JKJ: default pass .reg_db if database is merus_map default -dbv 2 type
// Rev. 27.10.2017, JKJ: Bug fix on lab version send extra null byte during write
// Rev. 31.10.2017, JKJ: Virtual rev update, compile with libftdi1 - speed up x 10
// Rev.  3.11.2017, JKJ: added symbolic input at parameter argument - if not number looksymbol up and return integer enum value. ver++
// Rev.  9.11.2017, MI : Improve error handling in when reading data from FTDI in MPSSE mode; Add reporting of libftdi under -v switch. ver++
// Rev. 27.02.2018, JKJ: MA120 OTP write and decode function, use -otp switch, ver++
// Rev. 22.03.2018, JKJ: MA120 OTP read and decode add time code and link to test data.
// Rev. 12.09.2018, JKJ: Update scom q function to streamline gen 1 and gen 2 address size. - .reg_file_... in hex 16 bits. Version .56 
// Rev. 18.09.2018, JKJ: Added name of symbol not found in lookup (for debug) Version .57
// Rev. 26.11.2018, JKJ: Added reset register otp 
// Rev. 29.4.2019, JKJ: Repo moved to Villach 
// Rev. 12.8.2020, JKJ: All OTP writes to address range 0x8000 - 0x8168 triggs additinal ECC OTP segment write 
// Rev. 18.8.2020, JKJ: Fixed ECC OTP range 0x8000 - 0x8140 - bump version number 
// Rev.  4.9.2020, JKJ: Added rev2 otp access settting for general OTP readall - bump version 
// Rev. 16.9.2020, JKJ: Fixed setpage anotation, 0x80 part of opcode was masked out - bumped version to 0.62 
      

// XXX no cli parameter pass on trim function

// Database version 2
// symbolic name is top.segment.symbol
// top     := <core|dm|pm|acfg>
// segment := <pm|test|i2s|...>
// symbol  := <whatever|...>


// Auto set by make flow


#ifdef RPI
#include <mysql/mysql.h>
#include <termios.h>
#include <stdint.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <errno.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>
#endif

#ifdef X86_LINUX
#include <mariadb/mysql.h>
#include <termios.h>
#include <ftdi.h>
#include "ftdispi.h"
#include "i2c_mpsse.h"
#endif

#ifdef WIN
#include <winsock2.h>
#include <mysql.h>
#include <windef.h>
#include "../lib/ftd2xx.h"

static int ft_wait(FT_HANDLE *fc, unsigned char mask, unsigned char value, int maxtry);

void sleep(unsigned int mseconds)
{
  clock_t goal = mseconds + clock();
  while (goal > clock());
}
#endif

unsigned int debug = 0;                                 // Default debug level -d[0..9]

typedef struct {
  int adr;
  int pos;
  int size;
} reg_type ;

typedef struct {                                                        // Structure used for OTP decoding. Array read from file at on first call
  unsigned char *symbol;
  int adr;
  int pos;
  int size;
  int reset;
} regs_type;


enum reg_top_type { CORE, ACFG, DSP, OTP };
unsigned char reg_top_str[5][10] = {"core","acfg","dsp","otp" };
int reg_top_adr[5] = { 0x0000, 0x0600, 0x1000, 0x8000 };
int reg_top;

//------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------- Dump database to file ----------------
//------------------------------------------------------------------------------------------------------
//----- name of database in argv[1]
//------------------------------------------------------------------------------------------------------

int dump_db_to_reg_file(char *db_table)
{  unsigned char str[128];
  unsigned char line[128];
  unsigned char adr_str[4];
  unsigned char file_name[128];

  FILE *db_name;
  FILE *reg_file;
  MYSQL *conn;
  MYSQL_RES *result;
  MYSQL_ROW row;
  int n;
  // Connect to db and select symbolname,address,size and pos from argument db_table

  sprintf(file_name,".reg_file_%s",db_table);
  reg_file = fopen(file_name, "w");
  printf("Dumping database %s\nTo file:%s\n",db_table,file_name);
  conn = mysql_init(NULL);

  mysql_real_connect(conn, "big.merus.lan", "jakobsen","merussql", NULL, 0, NULL, 0);
  mysql_query(conn, "use merus_ic_trunk");

  sprintf(str,"select name,address,position,size,reset from %s",db_table);
  if (mysql_query(conn, str)) {
    printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
    exit(1);
  }
  result = mysql_store_result(conn);
  n = mysql_num_fields(result);
  if (debug) { printf("n:%d\n",n); }

  while (row = mysql_fetch_row(result))
    { printf(".");
      fprintf(reg_file,"%s 0x%04x %d %d %d\n",row[0],atoi(row[1]),atoi(row[2]),atoi(row[3]),atoi(row[4]));
    }
  printf("\ndone\n");
  exit(0);
}

//------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------- Dump database to csv_file ------------
//------------------------------------------------------------------------------------------------------
//----- name of database in argv[1]
//------------------------------------------------------------------------------------------------------
int dump_db_to_csv_file(char *db_table)
{  unsigned char str[128];
  unsigned char line[128];
  unsigned char adr_str[4];
  unsigned char fname[128];
  unsigned char size,pos,umask;
  unsigned char umask_str[10];
  FILE *db_name;
  FILE *reg_file;
  MYSQL *conn;
  MYSQL_RES *result;
  MYSQL_ROW row;
  int n;
  // Connect to db and select symbolname,address,size and pos from argument db_table
  strcpy(fname,db_table);
  strcat(fname,".csv");
  printf("Debug, filename:%s\n",fname);
  reg_file = fopen( fname , "w");
  conn = mysql_init(NULL);
  mysql_real_connect(conn, "big.merus.lan", "jakobsen",
                     "merussql", NULL, 0, NULL, 0);
  mysql_query(conn, "use merus_ic_trunk");

  sprintf(str,"select address,position,size,name,reset,type,conv_type,dest,gui_use,description from %s order by address",db_table);
  if (mysql_query(conn, str)) {
    printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
    exit(1);
  }
  result = mysql_store_result(conn);
  n = mysql_num_fields(result);
  printf("n:%d\n",n);
  while (row = mysql_fetch_row(result))
    { printf(".");
      pos  = atoi(row[1]);
      size = atoi(row[2]);
      umask = ((1<<size)-1)<<pos;

      n = 7;
      while(n>=0)
        {
          umask_str[7-n]= (umask>=(1<<n))?'1':'0';
          umask       =  umask - ((umask>=(1<<n)))*(1<<n);
          n--;
        }
      umask_str[8] = 0;

      fprintf(reg_file,"%d,%s,%d,%d,%s,%d,%d,%d,%d,%d,%d,%s\n",
              atoi(row[0]),umask_str,pos,size,row[3],atoi(row[4]),atoi(row[4]),
              atoi(row[5]),atoi(row[6]),atoi(row[7]),atoi(row[8]),row[9] );
    }
  printf("\ndone\n");
  exit(0);
}


int dump_db_vhdl_const(char *db_table)
{  unsigned char str[128];
  unsigned char line[128];
  unsigned char adr_str[4];
  FILE *db_name;
  MYSQL *conn;
  MYSQL_RES *result;
  MYSQL_ROW row;
  int n,i;
  // Connect to db and select symbolname,address,size and pos from argument db_table
  conn = mysql_init(NULL);
  mysql_real_connect(conn, "big.merus.lan", "jakobsen",
                     "merussql", NULL, 0, NULL, 0);
  mysql_query(conn, "use merus_ic_trunk");

  sprintf(str,"select id,name,address,position,size,reset from %s",db_table);
  if (mysql_query(conn, str)) {
    printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
    exit(1);
  }
  result = mysql_store_result(conn);
  n = mysql_num_fields(result);
  //printf("n:%d\n",n);
  while (row = mysql_fetch_row(result))
    { printf("    (%d,pad(\"%s\"),%d,%d,%d,%d),\n",atoi(row[0]) ,row[1],atoi(row[2]),atoi(row[3]),atoi(row[4]),atoi(row[5]));
    }
  exit(0);
}


//------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------- Lookup symbol to address info --------
//------------------------------------------------------------------------------------------------------
//----- Search ordre reg_file_<db_name>, reg_db - flag error
//----- If a symbol clash is found in reg_files a error is flaged
//----- If enum_name = NULL : normal call, if string lookup enum and return
//------------------------------------------------------------------------------------------------------

int lookup(char *symbol, reg_type *reg, unsigned char db_version, char *enum_name)
{  if (debug) printf("MySQL client version: %s\n", mysql_get_client_info());

  unsigned char str[128];
  unsigned char line[256];
  unsigned char *reg_db_str;
  unsigned char *db_database;
  unsigned char *db_table;
  unsigned char *reg_segment;
  unsigned char *reg_symbol;
  unsigned char adr_str[4];
  unsigned char loop_symbol[128];

  struct dirent *dp ;
  DIR *dirp ;
  FILE *db_file;
  FILE *db_name;
  FILE *reg_file;
  MYSQL *conn;
  MYSQL_RES *result;
  MYSQL_ROW row;
  int n,i;
  int output_ok = 0;
  int symbol_found = 0;

  // Loop thrugh all .reg_file* in current directory
  // if symbod found store symbol info is struct
  // loop through rest of .reg_files and flag if found in other

  dirp = opendir(".");
  while ((dp = readdir(dirp)) != NULL)
    { if (strncmp(dp->d_name, ".reg_file", 8)==0)
        { output_ok = 1;
          if (debug)
            printf("Found file : %s\n", dp->d_name);
          // open file and seach for matchsymbol
          db_file = fopen(dp->d_name,"r");
          while (fgets(line,512,db_file) != NULL)
            { sscanf(line,"%s ",loop_symbol); // *[^\n]",loop_symbol);
              //printf("%s %s\n",symbol, loop_symbol);
              if (strcmp(symbol,loop_symbol)==0)
                { if (symbol_found)
                    { printf("Symbol also found in %s \nrun with debug flag and fix it\n",dp->d_name);
                      exit(-1);
                    }
                  if (debug)
                    { printf("Match symbol %s found in %s \n",symbol,dp->d_name);
                    }
                  unsigned int adr;
                  sscanf(line,"%s 0x%x %d %d",loop_symbol,&reg->adr, &reg->pos, &reg->size);
                  symbol_found = 1;
                }
            }
          fclose(db_file);
        }
    }
  (void)closedir(dirp);


  if (symbol_found)
    { return 0;
    }
  if (output_ok == 1)
    { printf("Symbol (%s) not found in any of given .reg_files\n",symbol);
      exit(-1);
    }

  // Go on with database lookup instead
  // All lookup redirected to ifx sql server 
   
  conn = mysql_init(NULL);
  if (conn == NULL) {
    printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
    exit(1);
  }
  if (0) {  
    if (mysql_real_connect(conn, "192.168.1.21" , "jakobsen",
                           "merussql", NULL, 0, NULL, 0) == NULL) {
      printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
      exit(1);
    }
  } 
  else 
    { 
      if (mysql_real_connect(conn, "devrd-db.vih.infineon.com" , "merus_r01",
                             "1zqFkTgxGTYMg.U", NULL, 0, NULL, 0) == NULL) {
        printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
        exit(1);
      } 
    }
   
   
  db_name = fopen(".reg_db", "r");
  db_table = malloc(256);
  if (db_name != NULL)
    { while (fgets(line, 256,db_name) != NULL )
        { reg_db_str = malloc(256);
          strcpy(reg_db_str,line);
        }
      fclose(db_name);
    }
  else
    { printf("No database table in .reg_db in current dir\n\n");
      printf("To list table in database merus_ic_trunk, issue command:\n");
      printf(" marb list\n\n");
      printf("Put table into a file named .reg_db \nUse the oneliner: \n");
      printf(" echo \"ma12070_register_spec_rev6_1\" > .reg_db\n");
      printf("\nBye\n");
      exit(-1);
    }
  // Remove trail newline from reg_db_str;
  char *ptr;
  ptr = reg_db_str + strlen(reg_db_str) - 1  ;
  if (*ptr == 0x0a )
    *ptr = 0;

  if (debug) printf(":%s:\n",reg_db_str);

  // Check active connction to database and set version flag
  // Check and split if . in db_name
  const char s[2] = ".";
  char *token0;
  char *token1;

  token0 = strtok(reg_db_str,s);
  token1 = strtok(NULL,s);
  if (token1 == NULL)
    { if (debug) { printf("Only table name %s\n", token0 ); }
      db_table = token0;
      db_database = malloc(256);
      strcpy(db_database, "merus_ic_trunk");
    } else {
    db_database = token0;
    db_table = token1;
  }

  if (debug) { printf("Database: %s table: %s from %s \n", db_database, db_table, reg_db_str); }

  char *sqlrequest;
  sqlrequest = malloc(128);
  sprintf(sqlrequest,"use %s",db_database);
  if (mysql_query(conn, sqlrequest))
    { fprintf(stderr,"%s\n" , mysql_error(conn));
      mysql_close(conn);
      exit(1);
    }
  if (debug)                                                        // database fund
    { printf("Symbol in : %s\n",symbol);
    }
  char *token_str;
  token_str = malloc(256);
  strcpy(token_str,symbol);

  // Format is <core|acfg|pm|dm|otp>.<pa|test|i2c_tdm|...>.symbolname  // default core
  token0 = strtok(token_str,s);
  reg_segment = malloc(256);
  reg_symbol  = malloc(256);

  if (strcmp(token0,"core")==0) {
    reg_top     = CORE;
    reg_segment = strtok(NULL,s);
    reg_symbol  = strtok(NULL,"");
  }
  else if (strcmp(token0,"acfg")==0)
    {
      reg_top     = ACFG;
      reg_segment = strtok(NULL,s);
      reg_symbol  = strtok(NULL,"");
    }
  else if (strcmp(token0,"dsp")==0) {
    reg_top     = DSP;
    reg_segment = strtok(NULL,s);
    reg_symbol  = strtok(NULL,"");
  }
  else if (strcmp(token0,"otp")==0) {
    reg_top     = OTP;
    reg_segment = strtok(NULL,s);
    reg_symbol  = strtok(NULL,"");
  }
  else
    { reg_top     = CORE;
      strcpy(reg_segment,token0);
      reg_symbol  = strtok(NULL,"");
    }

  if (debug) {
    printf("symbol in   : %s\n",symbol);
    printf("top         : %s\n",reg_top_str[reg_top]);
    printf("offset      : 0x%04x\n",reg_top_adr[reg_top]);
    printf("segment     : %s\n",reg_segment);
    printf("symbol      : %s\n",reg_symbol);
    printf("enum lookup : %s\n",enum_name);
  }


  if (db_version == 2)
    { if (enum_name == NULL)
        { // Check if symbol is valid
          sprintf(str,"select * from rs_%s where segmentType=\"%s\" and segment=\"%s\" and name=\"%s\"",db_table,reg_top_str[reg_top],reg_segment,reg_symbol);
          if (debug) printf("sql:%s\n",str);
          if (mysql_query(conn, str)) {
            printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
            exit(1);
          }
        }
      else  // Do enum_name lookup
        { sprintf(str,"select value from en_%s where name=\"%s\" and symbol=\"%s\"",db_table,symbol,enum_name);
          if (debug) printf("sql:%s\n",str);
          if (mysql_query(conn, str)) {
            printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
            exit(1);
          }
          result = mysql_store_result(conn);
          if (row = mysql_fetch_row(result))
            {
              return atoi(row[0]);
            }
          printf("enum not found \n");
          exit(-1);
        }
    } else
    { sprintf(str,"select * from %s where name=\"%s\"",db_table,symbol);
      if (debug) printf("sql:%s\n",str);
      if (mysql_query(conn, str)) {
        printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
        exit(1);
      }
    }
  result = mysql_store_result(conn);
  if (row = mysql_fetch_row(result))
    { if (db_version==2)
        {
          reg->adr  = atoi(row[3]);
          reg->pos  = atoi(row[4]);
          reg->size = atoi(row[5]);
        } else
        { reg->adr  = atoi(row[2]);
          reg->pos  = atoi(row[3]);
          reg->size = atoi(row[4]);
        }
      if (debug) printf("address:%d %d %d\n",reg->adr,reg->pos,reg->size);
    } else
    { printf("Symbol (%s) not found in register db.\nBye",symbol);
      exit(0);
    }
  if (db_version==2) // look up address of segment and add to address
    { sprintf(str, "select address from sl_%s where segment=\"%s\" and type=\"%s\"",db_table,reg_segment,reg_top_str[reg_top]);
      if (debug)
        { printf("Debug segment address lookup :%s\n",str);
        }
      if (mysql_query(conn, str)) {
        printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
        exit(1);
      }
      result = mysql_store_result(conn);
      if (row = mysql_fetch_row(result))
        {
          if (reg_top == ACFG )
            {
              reg->adr = reg->adr + atoi(row[0])*8 + reg_top_adr[reg_top];
            }
          else
            {
              reg->adr = reg->adr + atoi(row[0]) + reg_top_adr[reg_top];
            }
          if (debug) printf("address + segment: %d %d %d\n",reg->adr,reg->pos,reg->size);
        } else
        { printf("Segment (%s) not found in register db.\nBye",reg_segment);
          exit(0);
        }
    }
}



// If called from with otp option 
 
static regs_type regs[4096] = {{0,0,0,0}};

int lookup_symbol(unsigned char *symbol_view, int addr, int value)
{ // Return all symbols with values differ from reset
  struct dirent *dp ;
  DIR *dirp ;
  FILE *db_file;
  unsigned char mask ;
  unsigned char space[128];
  unsigned char str[256] = {0};
  unsigned char line[256];
  unsigned char *symbol ;
  symbol = malloc(256);
  int i = 0;
  int n = 0;
  int debug = 0;
  if (regs[0].size == 0)
    { if (debug) { printf("Regs is empty, Will read in structure\n");  }
      dirp = opendir(".");
      while ((dp = readdir(dirp)) != NULL)
        { if (strncmp(dp->d_name, ".reg_file", 8)==0)
            { if (debug) { printf("Found file : %s\n", dp->d_name); }
              db_file = fopen(dp->d_name,"r");

              while (fgets(line,512,db_file) != NULL)
                { if (line[0] != '#')
                    { sscanf(line,"%s 0x%x %d %d %d",symbol ,&regs[i].adr, &regs[i].pos, &regs[i].size, &regs[i].reset);
                      regs[i].symbol = malloc(strlen(symbol)+1);
                      strcpy(regs[i].symbol,symbol);
                      i++;
                    }
                }
              fclose(db_file);
            }
        }
      if (debug) { printf("All symbols (%d) read in.\n",i); }
    }
  i = 0;
  //Find all entries with this address
  int nl = 0;
  
  while (regs[i].size > 0 )
    { if (regs[i].adr == addr)
        { // mask out bits
          if (nl == 0)
            { strcpy(space,""); }
          else
            { strcpy(space,"                                               "); }

          unsigned mask = ((1<<regs[i].size)-1) << regs[i].pos ;
          if ( ( ((unsigned char) value) & mask) != regs[i].reset<<regs[i].pos)
            { //printf("\n Value : %d %d %d ",(unsigned char)value, mask, ((unsigned char)value & mask)>>regs[i].pos);
              sprintf(str, "%s%s%s = 0x%x\n",str,space,regs[i].symbol,((unsigned char)value & mask)>>regs[i].pos);
              nl++;
            }
          else
            { sprintf(str, "%s%s(%s)\n",str,space,regs[i].symbol);
              nl++;
            }

          //printf("\nAddress : %s 0x%04x %d %d %d\n", regs[i].symbol,regs[i].adr,regs[i].pos,regs[i].size,regs[i].reset);

        }
      i++;
    }
  //printf("\n");
  if (str[0] == 0)
    { strcpy(str,"\n"); }

  strcpy(symbol_view,str);
}

void removeSubstr (char *string, char *sub) {
  char *match;
  int len = strlen(sub);
  while ((match = strstr(string, sub))) {
    *match = '\0';
    strcat(string, match+len);
  }
}

unsigned int otp_read_device_id(unsigned char *cli_arg)
{
  FILE *fp;
  unsigned char cmd[128];
  unsigned int device_id[2] = {0, 0};
  unsigned int value;
  unsigned char hwid;
  int i, j;
  // Read device_id twice, compare and verfy date

  //removeSubstr(cli_arg,"-d1");
  //removeSubstr(cli_arg,"-otp");
  
  
  sprintf(cmd,"scom w 0x60c 0 %s; scom r 0x60c -od %s",cli_arg, cli_arg);
  fp = popen(cmd,"r");
  fscanf(fp,"%d ",&hwid);
  pclose(fp);       
  
  if (debug==1) { printf("hwid : 0x%02x \n",hwid);  }
   
  if (hwid >= 0x20 & hwid < 0x40) 
  { if (debug==1) { printf("rev1\n");  }
    sprintf(cmd,"scom w core.system.otp_reg_start_time 10 %s", cli_arg );  // relate to i2c speed 400k 3 // 100k 10
    system(cmd);
  } else if (hwid >= 0x40 & hwid < 0x50) 
  {
    if (debug==1) { printf("rev2\n");  }
    sprintf(cmd,"scom w core.system.otp_reg_start_time 0 %s", cli_arg );  // relate to i2c speed 400k 3 **notworking* // 100k 0
    system(cmd);
    sprintf(cmd,"scom w core.pa_hw.reg.OTP_supply_en_force 1 %s", cli_arg); 
	system(cmd);
  } else 
  { printf("Unvalid hwid: %d\n",hwid); 
  }   
     
  sprintf(cmd,"scom r 0x81f1 4 %s", cli_arg );
  // printf("in otp_read_device_id : %s\n",cmd);

  for (i=0; i<=1 ; i++)
    { //printf("%d : ",i);
      fp = popen(cmd,"r");
      for ( j=0 ; j<=3 ; j++ )
        {
          //printf(" %d ", j);
          fscanf(fp,"%x ",&value);
          device_id[i] = device_id[i] + (value<<((3-j)*8));
          //printf("%02x %08x",value,device_id[i]);
        }
      pclose(fp);
      //        printf("\n");
    }

  if (debug)
    { printf("Read device ID: %08x %08x  \n", device_id[0], device_id[1] );
    }
  if (device_id[0] == device_id[1])
    return device_id[0];
  else
    { printf("Device_id read error\n");
      exit(-1);
    }
}

int otp_read_segment(unsigned char *otp_mem,unsigned char *cli_arg)
{ 
  FILE *fp;                           
  enum OTPSTATEs {OPCODE, SINGLE_WRITE_GET_VALUE, BLOCKWRITE_GET_ADDRESS, BLOCKWRITE }; 
  enum OTPSTATEs state = OPCODE; 
  int i=0;
  int j=0;
  unsigned int blockwrite = 0;
  unsigned int blockadr   = 0;
  unsigned int segment    = 0;
  unsigned int otpptr     = 0;       
  unsigned char cmd[254];
  unsigned int regval;
  while (1)
    { if (debug) { printf("in loop %d %d\n",j,i); }
      sprintf(cmd,"scom r 0x%04x 16 %s",0x8000+j*16,cli_arg);
      if (debug) { printf("%s\n",cmd); }
      fp = popen(cmd,"r");
      for (i=0;i<16;i++)
      { fscanf(fp,"%x",&regval);
        otp_mem[16*j+i] = regval;
        switch (state) 
		{  
		    case OPCODE : { if ((regval & 0xe0) == 0xc0) 
			                { if (debug) { printf("Block write : %d bytes\n",(0x1f&regval)); } 
							  state = BLOCKWRITE_GET_ADDRESS;  
							  blockwrite = (0x1f & regval);   
							} else if ((regval & 0xc0) == 0x80) 
							{ if (debug) { printf("Set segment : 0x%04x\n",(0x3f&regval)<<7); }
							  state = OPCODE; 
							  segment = ((0x3f & regval)<<7);  
							} else if ((regval & 0x80) == 0x00) 
							{ if (debug) { printf("Single byte write : 0x%04x ",segment + (0x7f & regval)); }
							  state = SINGLE_WRITE_GET_VALUE; 
							} else if (regval == 0xff) 
							{ if (debug) { printf("End otp boot. Will return: 0x%04x\n",otpptr); }
							  return otpptr; 
							}  
						    otpptr++;
							break;
						  } 
        	case SINGLE_WRITE_GET_VALUE : 
			              { if (debug) { printf("Value : 0x%02x \n", regval);  }
 
						    otpptr++; 
						    state = OPCODE;   
						    break;
						  }
		
			case BLOCKWRITE_GET_ADDRESS : 
			              { blockadr = regval; 
						    otpptr++; 
						    state = BLOCKWRITE;   
						    break;
						  }
			
			case BLOCKWRITE : 
			              { blockadr = regval; 
						    otpptr++; 
							blockwrite--;  
							if (blockwrite == 0)
							{ state = OPCODE;   
						    }   
							break;
						  }
            default : break; 
		} 		                   
      }
      j++;
   }
}

#define BIT(byte, n) ((byte>>(n-1)) & 1)
/*
 * Calculate four parity bits for the [data] argument and return in the least significant nible
 */
uint8_t otpECC(uint8_t data) {
  uint8_t ndata = ~data;
  return 0x0F &
    ~(
      ((BIT(ndata, 1) ^ BIT(ndata, 2) ^ BIT(ndata, 4) ^ BIT(ndata, 5) ^ BIT(ndata, 7))) +
      ((BIT(ndata, 1) ^ BIT(ndata, 3) ^ BIT(ndata, 4) ^ BIT(ndata, 6) ^ BIT(ndata, 7))<<1) +
      ((BIT(ndata, 2) ^ BIT(ndata, 3) ^ BIT(ndata, 4) ^ BIT(ndata, 8))<<2) +
      ((BIT(ndata, 5) ^ BIT(ndata, 6) ^ BIT(ndata, 7) ^ BIT(ndata, 8))<<3)
      );
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

long spispeed = 100000;    // spi clock reduced by 4 time due to timing jkj 31.8.2013
int i2c_address;


const double version                  = 0.62;
const unsigned char release_note[128] = { "OTP ECC general read out rev2"} ;

const char space[] = " ";
const char clear[4] = { 0xff, 0xff, 0xff, 0xff };

int main(int argc, char **argv)
{

#ifdef X86_LINUX
  struct ftdi_context    fc;
  struct ftdispi_context fsc;
#endif

#ifdef WIN
  FT_HANDLE fc;
#endif

  // Database version
  unsigned char db_version = 1;           // Database version overwritten by argument: -dbv 2
  FILE *dbv_file;                         // file:     .db_version
  unsigned int dbv_set = 0;               // db version has not been set


  FILE *com_file;                         // .com_i2c i2c_address
  unsigned int com_if = 0;                // Default spi
  unsigned int i2c_device = 1;            // Default i2c device pin 3/5 on raspberry pi
                                          // -i2c_dev 0 to force alternaitve i2c bus pin
  unsigned char line[128];                // buffer for read in .com_i2c pin 27/28

  FILE *fp;
  unsigned char cmdarg[128][128];
  unsigned char cmdline[128] = "";
  unsigned char wbuf[256] = "";
  unsigned char rbuf[256] = "";
  unsigned int regval;
  unsigned int dac;
  unsigned int temp = 0;
  unsigned char umask;
  unsigned char mask;
  int verify = 0;
  int error = 0;
  int i,j,n,narg,nw,nc,nr;

  int adr;
  unsigned int data;
  unsigned int gdon, gdoff;
  unsigned int pos = 0;
  unsigned int size = 0 ;
  // Commmand line parsing and default values
  // Print version -v[0..1]  -v  Version string
  //                         -v0 Version nr only
  unsigned char serial[10] = "";
  unsigned char cli_serial[16] = "";
  unsigned char cli_arg[48] = "";
  int serial_length;

  unsigned char cmd[128];
  unsigned char otp_switch = 0;

  reg_type reg;
  int val;
  unsigned int output_format = 0;                       // Output format default Hex, -d dec. -b binary
  int on,trimval,key,init=1;

  nw   = 2; nr = 0;
  narg = 1;

  if (argc == 1) print_usage();
  while (narg < argc)
    { if (strncmp(argv[narg],"-otp",4)==0)         // Check for OTP switch
        { otp_switch = 1;
          narg++;
        }
      else if (strncmp(argv[narg],"-o",2)==0)    // Other output format
        { if (argv[narg][2] == 'b')                     // Binary output format
            { output_format = 2;
              narg++;
            }
          else if (argv[narg][2] == 'd')      // Decimal output format
            { output_format = 1;
              narg++;
            }
          else
            { printf("Output format specifier not understood. Exiting\n");
              exit(-1);
            }
        }
      else if (strncmp(argv[narg],"-i2c_dev",8)==0) //  Check of non default symbol format
        { if (strlen(cli_arg)==0)
            { sprintf(cli_arg,"-i2c_dev %s",argv[narg+1]);  // parse on cmdline argument for recursive call
            }
          else
            { sprintf(cli_arg,"%s -i2c_dev %s",cli_arg,argv[narg+1]);
            }
          i2c_device = getvalue(argv[narg+1]);
          if ((i2c_device<0) || (i2c_device>1))
            { printf("Argument error: i2c_device version out of range\n");
              printf("exit -1\n");
              exit(-1);
            }
          narg++;
          narg++;
        }
      else if (strncmp(argv[narg],"-dbv",4)==0) //  Check of non default symbol format
        { if (strlen(cli_arg)==0)
            { sprintf(cli_arg,"-dbv %s",argv[narg+1]);  // parse on cmdline argument for recursive call
            }
          else
            { sprintf(cli_arg,"%s -dbv %s",cli_arg,argv[narg+1]);
            }
          db_version = getvalue(argv[narg+1]);
          dbv_set = 1;
          if ((db_version<1) || (db_version>2))
            { printf("Argument error: db version out of range\n");
              printf("exit -1\n");
              exit(-1);
            }
          narg++;
          narg++;
        }
      else if (strncmp(argv[narg],"-i2c",4)==0) //  Check if i2c interface and address valid
        { if (strlen(cli_arg)==0)
            { sprintf(cli_arg,"-i2c %s",argv[narg+1]);
            }
          else
            { sprintf(cli_arg,"%s -i2c %s",cli_arg,argv[narg+1]);
            }
          i2c_address  =  getvalue(argv[narg+1]);
          if ((i2c_address<0) || (i2c_address > 128) )
            { printf("Argument error: i2c address out of range\n" );
              printf("exit -1");
              exit(-1);
            }
          com_if = 1;                             // interface is i2c
          narg++;
          narg++;
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
      else if (strncmp(argv[narg],"-s",2)==0)   // Open ftdi_usb by serial number
        { narg++;
          serial_length = strlen(argv[narg]);
          if ((serial_length<=0) || (serial_length>8))
            { printf("FLADPANDE !!! serial id tag must be string upto 8 chars\n");
              printf("exit\n");
              exit(0);
            }
          strcpy(serial,argv[narg]);
          strcpy(cli_serial, "-s ");
          strcat(cli_serial,serial);
          if (strlen(cli_arg)==0)
            { strcpy(cli_arg, cli_serial);
            }
          else
            { sprintf(cli_arg,"%s %s",cli_arg,cli_serial);
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
#ifdef X86_LINUX
#ifdef FTDI_HAS_VER
              //struct ftdi_version_info ver;
              //ver = ftdi_get_library_version();
              //printf("  linked with libftdi version: %s (git snapshot %s)\n", ver.version_str, ver.snapshot_str);
#else
              printf("  linked with libftdi older than version 1.0\n");
#endif
#endif
              exit(0);
            }
        }
      else
        {
          strcat(cmdline,argv[narg++]);
          strcat(cmdline,space);
        }
    }

  if (com_if == 0)
    { com_file = fopen(".com_i2c", "r");

      if (com_file != NULL)
        { fgets(line, 127,com_file);

          //printf("Read .com_i2s :%s %d        \n",line, (int)strlen(line) );
          line[(int)strlen(line)-1] = 0;
          i2c_address = getvalue(line);

          fclose(com_file);

          if (i2c_address<0 || i2c_address>127)
            {
              printf("Address in .com_i2c is outof range\nexit -1\n");
              exit(-1);
            }
          else
            {
              com_if = 1;
            }
        }
    }

  if (dbv_set == 0)        // XXX eventaul pass on command line in recursive call
    { dbv_file = fopen(".db_version", "r");

      if (dbv_file != NULL)
        { fgets(line, 127,dbv_file);

          //printf("Read .com_i2s :%s %d        \n",line, (int)strlen(line) );
          line[(int)strlen(line)-1] = 0;
          db_version = getvalue(line);

          fclose(dbv_file);

          if (db_version<0 || db_version>2)
            {
              printf("DB version must be 1 or 2  \nExit 1\n");
              exit(-1);
            }
          else
            {
              dbv_set = 1;
            }
        }
    }

  if (debug)
    { printf("Commandline    : %s\n",cmdline);
      printf("Outputformat   : %d\n",output_format);
      printf("Debug level    : %d\n",debug);
      printf("Database format: %d\n",db_version);
      printf("OTP switch     : %d\n",otp_switch);
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
      val = getvalue(cmdarg[2]);
      if (val == -1)
        { if (debug) { printf("Enum given for value will lookup in database\n"); }
          val = lookup(cmdarg[1],&reg,db_version,cmdarg[2]);
          if (debug) { printf("value : %d \n", val);
          }
        }
      if (debug)
        { printf("Debug: in write %x %s \n",adr,cmdarg[1]);
        }
      if (adr == -1)                   // adr parameter is not a numeric value
        { lookup(cmdarg[1],&reg,db_version,NULL);       // check if symbol is a valid signal name in database and return register stuf in reg
          if (debug) {
            printf("Debug write done by symbol will do read modify write on register\n");

          }
          if (otp_switch == 1)
            {
              printf("OTP at symbolic level not supported.\n");
              printf("Use the address: 0x%04x and make sure other symbols sharing this address are considered\n",reg.adr);
              exit(-1);
            }
          if ((reg.size < 8) & (reg_top != ACFG))
            { sprintf(cmd,"scom r %d %s",reg.adr,cli_arg);
              if (debug) {  printf("In RMW cmd:%s\n",cmd); }
              fp = popen(cmd,"r");
              fscanf(fp,"%x",&regval);
              pclose(fp);
            }
          if ((reg_top == ACFG) & (reg.size < 8))
            { unsigned char bitstring[32];
              int j = 0;
              int k;
              int bold = 0;
              printf("%sWarning%s write to bits in ACFG segment, other bits will be zeroed\n","\e[1m","\e[0m");
              for (k=7; k>=0; k--)
                { if (k>=(reg.size+reg.pos))
                    { if (k == 7)
                        { bitstring[j++] = '\033';
                          bitstring[j++] = '[';
                          bitstring[j++] = '1';
                          bitstring[j++] = 'm';
                          bold = 1;
                        }
                      bitstring[j++] = '0';
                    }
                  else if (k<reg.pos)
                    { if (bold == 0)
                        { bitstring[j++] = '\033';
                          bitstring[j++] = '[';
                          bitstring[j++] = '1';
                          bitstring[j++] = 'm';
                          bold = 1;
                        }
                      bitstring[j++] = '0';
                    }
                  else
                    { if (bold == 1)
                        { bitstring[j++] = '\033';
                          bitstring[j++] = '[';
                          bitstring[j++] = '0';
                          bitstring[j++] = 'm';
                          bold = 0;
                        }
                      bitstring[j++] = 'x';
                    }
                }
              bitstring[j] = 0;

              printf("%s = %d  :  %s\n",cmdarg[1],val,bitstring);
            }

          if (debug)
            { printf("in write symbol func: reg:%d value:%d\n",reg.adr,regval); }

          if (val > ((1<<reg.size)-1))                  // Check if value is out of range
            { printf("ERROR2 : Value out of range (0x%02x).  Valid range 0x%02x - 0x00\n",val,(1<<reg.size)-1);
              printf("Exit\n");
              exit(-1);
            }

          umask = ((1<<reg.size)-1)<<reg.pos;
          umask = 0xff & ~umask;

          wbuf[0] = 0x02;                               // single write
          if (db_version == 1)
            { wbuf[1] = reg.adr;
              wbuf[2] = (regval & umask) | (val<<reg.pos) ;
              nw = 3;
            }
          else
            { wbuf[1] = reg.adr/256;
              wbuf[2] = reg.adr & 0xff;  //   wbuf[1]*256;
              wbuf[3] = (regval & umask) | (val<<reg.pos) ;
              nw = 4;
            }
        }
      else
        { int data_offset = 2;
          if (db_version == 1)
            { wbuf[1] = adr;
            }
          else
            { wbuf[1] = adr/256;
              wbuf[2] = adr & 0xff; //-(wbuf[1]*256);
              data_offset++;
              if ((0x8140 > adr ) & (adr >= 0x8000)) { 
                val = getvalue(cmdarg[2]);
                if (debug) { printf("Write to OTP ECC protrocted area - OTP ECC code will be written aswell\n"); }
                uint16_t otpEccCodePtr      = ((adr - 0x8000)>>1) + 0x8140 ;   
                uint8_t  otpEccValue        = (adr%2==0)? 0xf0 | otpECC(val) : (0x0f | (otpECC(val)<<4)) ; 
                
                sprintf(cmd, "scom w 0x%04x 0x%02x %s", otpEccCodePtr, otpEccValue, cli_arg ) ; 
                // Assert 
                //if (reg.pos !=0 ) { printf("Error reg pos must be zero"); exit(1); }
                //if (reg.size !=8 ) { printf("Must be full byte write operation"); exit(1); }
                printf("%s\n",cmd);
                system(cmd);
              } 
            }
          if (narg <= 2)
            { printf("ERROR: No value given \n");
              printf("Exit\n");
              exit(-1);
            }
          i = 0;
          while (narg > i+2)
            { wbuf[data_offset+i] = getvalue(cmdarg[2+i]);
              i++;
            }
          wbuf[0] = 0x02 + ((i-1)<<5);
          nw = i+data_offset;
        }
      break;
    case 'r' : adr = getvalue(cmdarg[1]);
      if (adr == -1 )
        { lookup(cmdarg[1],&reg,db_version,NULL);
          adr = reg.adr;
          pos = reg.pos;
          size = reg.size;
        }
      if (db_version == 2)
        { wbuf[1] = adr/256;
          wbuf[2] = adr & 0xff;
          if (debug)
            {
              printf("r debug: adr     = 0x%04x\n",adr);
              printf("r debug: wbuf[1] = 0x%02x\n",wbuf[1]);
              printf("r debug: wbuf[2] = 0x%02x\n",wbuf[2]);
            }
          nw = 3;
        }
      else
        { wbuf[1] = adr;
          nw = 2;
        }
      if (narg > 2)
        { nr = getvalue(cmdarg[2]);
          if (nr<1 || nr>128)     // xxx or unlimited if i2c if
            { printf("ERROR: Number of byte to read out of range [128 - 1]\n");
              printf("Exit\n");
              exit(-1);
            }
        }
      else
        nr = 1;
      wbuf[0] = 0x01 + ((nr-1)<<5);
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
    case 'k'  : nr = 4;
      nw = 0;
      temp = 1;
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
            { lookup(cmdarg[1],&reg,db_version,NULL);       // check if symbol is a valid signal name in database and return register stuf in reg
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
    case 'q'  : dump_db_to_reg_file(cmdarg[1]);
      break;
    case 'g'  : dump_db_to_csv_file(cmdarg[1]);
      break;
    case 'v'  : dump_db_vhdl_const(cmdarg[1]);
      break;
    case 'm'  : adr = getvalue(cmdarg[1]);
      usleep(adr*1000);
      exit(0);
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


  //------------------------------------------------------------------------------------------------------
  //-------------------------------------------------------------------- OTP MA120 management ------------
  //------------------------------------------------------------------------------------------------------

  if (otp_switch == 1)                                                 // process write buffer for otp write
    {
      unsigned int otp_mem_entry_ptr = 0x8000;
      unsigned int otp_mem_entrys    = 0;
      unsigned int otp_mem_ptr       = 0x8000;
      unsigned int otp_mem_page      = 0x00;

      // Find next valid entry in otp memory and save to otp_mem_entry_ptr
      
      unsigned int device_id = otp_read_device_id(cli_arg);

      printf("Device id : 0x%08x http://dut.big.merus.lan/%8x\n", device_id, device_id);

      int otp_entries[2];
      unsigned char *symbol_view;
      symbol_view = malloc(1024*4);
      unsigned char otp_mem[1024] = {0};
      unsigned char otp_mem_cache[1024] = {0};

      otp_entries[0] = otp_read_segment(otp_mem,cli_arg);
      otp_entries[1] = otp_read_segment(otp_mem_cache,cli_arg);

      if ((otp_entries[0] == otp_entries[1]) & (otp_entries[0] >= 0))
        { int k;
          for (k=0; k<=otp_entries[0]; k++ )
            { if (otp_mem[k] != otp_mem_cache[k])
                {  printf("OTP mem read back check do not match at address 0x8000 + %d\n",k);
                  printf("Exit\n");
                  exit(1);
                }
              if (debug) { printf("%x ",otp_mem[k]);  }
            }
        }
      else
      { printf("Read error !\n");
          exit(1);
      }

      // Copy of OTP memory is read in twice and all good.
      // Now do
      otp_mem_entrys = otp_entries[0];
      otp_mem_entry_ptr = otp_mem_entrys +  otp_mem_entry_ptr;
      printf("=================================================================================\n");
	  printf(" Addr  : Data      : Opcode    : Addr value  : Symbolic view (resetvalue) \n");
	  printf("---------------------------------------------------------------------------------\n");        
      for (i = 0; i<=otp_mem_entrys;i++)
        { printf("0x%04x ",i+0x8000);
          if ((otp_mem[i] & 0x80) == 0x00)                                                // Single write
            {
              lookup_symbol(symbol_view, otp_mem[i] + otp_mem_page , otp_mem[i+1]);
              //strcpy(symbol_view,"\n"); 
				
			  printf(": 0x%02x 0x%02x   byte write   0x%04x 0x%02x  %s",
                     otp_mem[i], otp_mem[i+1],
                     otp_mem[i]+ otp_mem_page, otp_mem[i+1], symbol_view);
              i++;
            } else if ((otp_mem[i] & 0xc0) == 0x80 )                                     // Set page
            { otp_mem_page = (otp_mem[i] & 0x3f)<<7;
              printf(": 0x%02x        setpage      0x%04x\n",
                     (otp_mem[i]) , otp_mem_page);
            } else if  ((otp_mem[i] & 0xe0) == 0xc0) 
            {
              int len = (otp_mem[i] & 0x1f) ;
              printf(": 0x%02x 0x%02x   block write %d\n", otp_mem[i], otp_mem[i+1], len );
              for (j=0;j<len;j++)
                { lookup_symbol(symbol_view, otp_mem_page+otp_mem[i+1]+j , otp_mem[i+j+2] );
                  //strcpy(symbol_view,"\n"); 
				  printf("0x%04x : 0x%02x        cont         0x%04x 0x%02x  %s", (i+j+2+0x8000), otp_mem[i+j+2], 
                         otp_mem_page + otp_mem[i+1] + j ,
                         otp_mem[i+j+2],
                         symbol_view ); 
                }
              i = i+j+1;
            }
          else
            { printf(": 0x%02x        OTP entry pointer\n",otp_mem[i]);
              break;
            }
        }
		printf("---------------------------------------------------------------------------------\n");        
        printf("otp_mem_page_ptr         : 0x%04x\n",otp_mem_page);
        printf("otp_mem_entry_ptr        : 0x%04x\n",otp_mem_entry_ptr );
      if (nw >= 32+3)
        { printf("Max 32 elements in a single OTP block write function\n");
          printf("exit\n");
          exit(-1);
        }

      if ((wbuf[0] & 0x02) == 0x02) // write operation
        { printf("OTP write to address 0x%04x\n",adr);
          printf("Current OTP page     0x%04x\n",otp_mem_page);
          printf("Number of data            %d\n",nw-3);

          // Check if new setpage is needed
          if ((adr >= otp_mem_page) & (adr <= 127+otp_mem_page))    // Check to use current otp_page
            { printf("Can be reached with in current page:\n" ); }
          else
            { printf("Will set new page and calculate address offset\n");
              sprintf(cmd,"scom w 0x%04x 0x%02x %s",otp_mem_entry_ptr++,0x80+(adr>>7),cli_arg);    // Setpage
              printf("Set new page         : %s \n",cmd);
              system(cmd);
              usleep(1000);
              otp_mem_page = (adr & 0xff80);
              printf("New page : 0x%04x\n", otp_mem_page);
            }

          if (nw-3 > 1)    // Block write
            { sprintf(cmd,"scom w 0x%04x 0x%02x %s",otp_mem_entry_ptr++,0xc0+(nw-3),cli_arg);      // Set block write and length
              printf("Set block write + n  : %s \n",cmd);
              system(cmd);
              usleep(1000);
            }

          sprintf(cmd,"scom w 0x%04x 0x%02x %s",otp_mem_entry_ptr++,(adr-otp_mem_page),cli_arg); // Single write address
          printf("Set address          : %s \n",cmd);
          system(cmd);
          usleep(1000);

          for (i = 0; i < nw-3; i++ )
            { sprintf(cmd,"scom w 0x%04x 0x%02x %s",otp_mem_entry_ptr++,wbuf[3+i],cli_arg);        // Write data
              printf("Data value           : %s \n",cmd);
              system(cmd);
              usleep(1000);
            }
        }
      printf("All good \n");
      exit(1);
    }










  //------------------------------------------------------------------------------------------------
  //--     Linux ftdi open source SPI write function
  //------------------------------------------------------------------------------------------------


#ifdef RPI
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
  // altertive rpi i2c imp
  if (com_if==1)                                                                                                                                 // i2c interface
    { int fd;
      unsigned char *txbuffer;
      if (i2c_device == 1)
        fd = open("/dev/i2c-1",O_RDWR);
      else
        fd = open("/dev/i2c-0",O_RDWR);
      if (fd < 0) {
        printf("Error opening i2c device:  %s\n", strerror(errno));
        return 1;
      }
      if (ioctl(fd, I2C_SLAVE, i2c_address) < 0) {
        printf("ioctl error: %s\n", strerror(errno));
        return 1;
      }
      if (nr==0)        // write only
        { txbuffer = &wbuf[1];
          if (write(fd, txbuffer,nw-1) != nw-1)
            {
              printf("Error writing to device: %s\n", strerror(errno));
            }
          close(fd);
        }
      else
        { // read func => write address and read back
          txbuffer = &wbuf[1];
          if (write(fd, txbuffer,nw-1) != nw-1)
            {
              printf("Error writing to device: %s\n", strerror(errno));
            }
          read(fd,&rbuf,nr);
          close(fd);
        }
    }

  /*
    if (com_if==1)                // i2c interface
    { int com;
    if (i2c_device == 1)
    com = wiringPiI2CSetupInterface("/dev/i2c-1", i2c_address);
    else
    com = wiringPiI2CSetupInterface("/dev/i2c-0", i2c_address);

    if (com < 0)
    { printf("i2c com error ......return:%d\n",com);
    exit(-1);
    }
    if (nr==0)          // Write single  -- Block not suported due to limitation in wiringPi i2c imp.
    {
    if (nw > (2+db_version))          // db_version 1: 3 or db_version 2: 4
    { printf("Block write not supported, exit\n");
    exit(1);
    }
    if (db_version == 1)
    {  wiringPiI2CWriteReg8(com,wbuf[1],wbuf[2]);           // Write address + data
    }
    else                                                    // 16 bit address space : msb adr , lsb adr, data
    { if (debug)                                            // but writeReg16 swap edian on data
    { printf("I2C 16 bit address space : 0x%02x 0x%04x \n", wbuf[1],(wbuf[3]<<8)+wbuf[2]);
    }
    wiringPiI2CWriteReg16(com,wbuf[1],(wbuf[3]<<8)+wbuf[2]);
    }
    //if (1) printf("Adress  : 0x%02x\n",wbuf[1]);
    //for (i = 0; i < nw-2; i++)
    //{ writePiI2CWriteReg8(com,wbuf[i+2]);
    // if (1) printf(" Data[%0d] : 0x%02x\n",i,wbuf[i+2]);
    //} 
    }
    else             //  Read block or single
    {  if (db_version == 2)
    {                                  // Write address to DUT
    wiringPiI2CWriteReg8(com,wbuf[1],wbuf[2]);
    for (i=0; i< nr; i++)
    { rbuf[i] = wiringPiI2CRead(com);
    }
    }
    else
    {
    for (i=0; i < nr;i++)
    {
    rbuf[i] = wiringPiI2CReadReg8(com,wbuf[1]+i);
    }
    }
    }
    }
  */
  else
    {                             // Default spi
      // Warning no 2'nd db version handling aka 2 byte address support
      static const char *device = "/dev/spidev0.1";
      static uint32_t mode;
      static uint8_t bits = 8;
      static uint32_t speed = 50000;
      static uint16_t delay;

      int ret = 0;
      int fd;
      struct spi_ioc_transfer xfer[2];
      uint8_t tx[10] ;
      uint8_t rx[10] = { 0x00, };

      fd = open(device, O_RDWR);
      if (fd < 0)
        {  printf("open error\n");
          exit(0);
        }
      ret = ioctl(fd, SPI_IOC_WR_MODE32, &mode);
      //printf("ret: %.2x",ret);
      ret = ioctl(fd, SPI_IOC_RD_MODE32, &mode);

      ret = ioctl(fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
      ret = ioctl(fd, SPI_IOC_RD_BITS_PER_WORD, &bits);

      ret = ioctl(fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
      ret = ioctl(fd, SPI_IOC_RD_MAX_SPEED_HZ, &speed);

      //printf("spi mode: 0x%x\n", mode);
      //printf("bits per word: %d\n", bits);
      //printf("max speed: %d Hz (%d KHz)\n", speed, speed/1000);

      if (nr==0)  // Write block and single
        {

          tx[0] = ((nw-3)<<5) + 0x02;                  // Opcode
          tx[1] = wbuf[1];                             // Address
          for (i = 0; i < nw ; i++)                    // Data
            { tx[i+2] = wbuf[i+2];
            }
          if (debug)
            { printf("TX: nw:%d, opcode:0x%02x, address:0x%02x\n",nw,tx[0],tx[1]);
              for (i = 0; i < nw-2 ; i++)
                { printf("i:%d  0x%02x\n",i,tx[i+2]);
                }
            }
          xfer[0].pad          = 0;
          xfer[0].tx_buf       = (unsigned long)tx;
          xfer[0].len          = nw;
          xfer[0].cs_change    = 0;
          xfer[0].delay_usecs  = delay;
          xfer[0].speed_hz     = speed;
          xfer[0].bits_per_word = bits;
          ioctl(fd, SPI_IOC_MESSAGE(1), xfer) ;
        }
      else
        {  tx[0]                = ((nr-1)<<5) + 0x01;     // Opcode
          tx[1]                =  wbuf[1];               // Address
          xfer[0].pad          = 0;
          xfer[0].tx_buf       = (unsigned long)tx;
          xfer[0].len          = 2;
          xfer[0].cs_change    = 0;
          xfer[0].delay_usecs  = delay;
          xfer[0].speed_hz     = speed;
          xfer[0].bits_per_word = bits;

          xfer[1].pad          = 0;
          xfer[1].rx_buf       = (unsigned long)rx;
          xfer[1].len          = nr;                          /* Length of  command to read*/
          xfer[1].cs_change    = 0;
          xfer[1].delay_usecs  = delay;
          xfer[1].speed_hz     = speed;  //speed
          xfer[1].bits_per_word = 8;  // bites per word 8

          ret = ioctl(fd, SPI_IOC_MESSAGE(2), xfer);
          if (ret < 0)
            { printf("rx error\n");
              perror("SPI_IOC_MESSAGE");
              return error;
            }

          for (i=0; i<nr; i++ )
            { rbuf[i] = rx[i];
            }
          //  printf("Read rx: 0x%02x 0x%02x\n",rx[0],rx[1]);

        }


      close(fd);
      //  ftdispi_write_read(&fsc, wbuf, nw, rbuf, nr, 0);

    }


#endif



  //------------------------------------------------------------------------------------------------
  //--     Linux ftdi open source SPI write function
  //------------------------------------------------------------------------------------------------

#ifdef X86_LINUX
  if (ftdi_init(&fc) < 0)
    {
      fprintf(stderr, "ftdi_init failed\n");
      return 1;
    }
   int res = ftdi_set_interface(&fc, INTERFACE_A);
   if (strlen(serial)>0)
    { if (debug) { printf("DEbug open: %s\n",serial); }
      i = ftdi_usb_open_desc(&fc, 0x0403, 0x6010,NULL, serial);
    } else {
    i = ftdi_usb_open_desc(&fc, 0x0403, 0x6010,NULL, NULL);
  }
  if (i < 0 && i != -5) {
    fprintf(stderr, "Error: ftdi_usb_open_desc failed (%d): %s\n", i, ftdi_get_error_string(&fc));
    exit(-1);
  }
  if (com_if==0)                // Default spi interface
    {
      ftdispi_open(&fsc, &fc, INTERFACE_A);
      ftdispi_setmode(&fsc, 1, 0, 0, 0, 0, 0);
      ftdispi_setclock(&fsc, spispeed );                // 100 min.
      ftdispi_setloopback(&fsc, 0);
      ftdispi_write_read(&fsc, wbuf, nw, rbuf, nr, 0);
      ftdispi_close(&fsc, 1);
    } else
    {
      int b;
      initI2C(fc);

      I2CStart();

      if (nr >= 1) // Check if read request
        { if (debug) { printf("Read mode\n");}
          b = SendByteAndCheckACK(fc,(unsigned char) ((i2c_address<<1) ) );
          if (b==0)
            { printf("No ACK from device using i2c address: 0x%02x - Will exit with ERROR -1\n",i2c_address);
              I2CStop();

              ftdi_write_data(&fc, mem, dw); dw = 0;
              ftdi_usb_close(&fc);
              ftdi_deinit(&fc);
              exit(-1);
            }

          if (debug) printf("Start adr : %d\n",wbuf[1]);

          if (db_version == 2)                                                                                                                  // db version 2
            { SendByteAndCheckACK(fc,(unsigned char)wbuf[1]);
              SendByteAndCheckACK(fc,(unsigned char)wbuf[2]);
            }
          else
            { SendByteAndCheckACK(fc,(unsigned char)wbuf[1]);
            }

          I2CStart();  // repeated start

          b = SendByteAndCheckACK(fc,(unsigned char) ((i2c_address<<1) + 1) );
          if (b==0)
            { printf("No ACK from device using i2c address: 0x%02x - Will exit with ERROR -1\n",i2c_address);
              I2CStop();
              ftdi_write_data(&fc, mem, dw); dw = 0;
              ftdi_usb_close(&fc);
              ftdi_deinit(&fc);
              exit(-1);
            }

          b = ReadnByteAndSendNAK(fc,nr);
          for (i=0; i<nr;i++)
            {
              rbuf[i] = r_mem[i];
              if (debug) { printf(" 0x%02x ",rbuf[i]);
              }
            }
          //for (i=0 ;i<nr; i++)
          //{  b = ReadByteAndSendNAK(fc);
          //   if (debug) { printf("b:0%02x \n",b); }
          //   rbuf[i] = b ;
          //}

        }
      else
        { // Do data write part
          b = SendByteAndCheckACK(fc,(unsigned char) ((i2c_address<<1) ) );
          if (b==0)
            { printf("No ACK from device using i2c address: 0x%02x - Will exit with ERROR -1\n",i2c_address);
              I2CStop();
              ftdi_write_data(&fc, mem, dw); dw = 0;
              ftdi_usb_close(&fc);
              ftdi_deinit(&fc);
              exit(-1);
            }
          if (debug) printf("Start adr : %d\n",wbuf[1]);
          if (db_version == 2)
            { b = SendByteAndCheckACK(fc,(unsigned char) wbuf[1]);
              b = SendByteAndCheckACK(fc,(unsigned char) wbuf[2]);
            }
          else
            { b = SendByteAndCheckACK(fc,(unsigned char) wbuf[1]);
            }
          for (i = 0 ; i<nw-(db_version+1);i++)
            { if (debug) { printf("write: %d 0x%02x ",i, wbuf[db_version+1+i]); }
              b = SendByteAndCheckACK(fc,(unsigned char)wbuf[db_version+1+i]);
            }
        }
      I2CStop();
      ftdi_write_data(&fc, mem, dw); dw = 0;
      ftdi_usb_close(&fc);
      ftdi_deinit(&fc);
    }
#endif


#ifdef WIN
  //-----------------------------------------------------------------------------------------------
  //--     Windows ftdi using low level DT_FTDI call to MPSSE
  //------------------------------------------------------------------------------------------------

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

  i = FT_Open(0,&fc);
  if ( i > 0 )
    { error = i; }
  if (debug) printf("open FT : %d\n",i);

  i = FT_SetBitMode(fc, 0x00, 0x02);            // Serial MPSSE;

  if (debug) printf("Set MPSSE mode: %d\n",i);
  unsigned int div = 0x05DB;            // 1 MHz SPI clock
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


  //-----------------------------------------------------------------------------------------------------------
  //--      If verify enable recursive call to scom !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  //-----------------------------------------------------------------------------------------------------------


  // Enable to check if write was done correct
  if ((nr == 0) && (verify == 1))                               // only if it was a write operation
    { if (debug) { printf("Check write operation\n"); }
      sprintf(cmd,"scom r %d %s",wbuf[1], cli_serial);
      if (debug) { printf("Call : %s \n",cmd); }
      fp = popen(cmd,"r");
      fscanf(fp,"%x",&regval);
      pclose(fp);
      if (wbuf[1] != 11)                             // No if reg 11 due to modMode metal fix fuck up
        {
          if (regval != wbuf[2])
            { printf("ERROR: Readback to register: %d, not eq written value\n",wbuf[1]);
              printf("Readback value: 0x%02x  Written 0x%02x \n",regval,wbuf[2]);
              exit(-1);
            }
          else
            { if (debug) { printf("written value verified\n"); }
            }
        }
    }

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
  else if (temp == 1)
    {
      if (debug)
        { for (i=0;i<=3;i++)
            { tobin(rbuf[i]);
              printf(" ");
            }
          printf("\n");
        }
      double k_temp = 0.0;
      k_temp = (rbuf[0]&0x7f)*64 + ((rbuf[1]&0xfc)>>2);

      printf("%3.2f\n",k_temp/4);
      //      (double) (rbuf[0]&0x7f)*16 + ((rbuf[1]&0xf0)>>4) + (((rbuf[1]&0x0c)>>2)/4) ) ;
      //  buf[1]&0xf);
    }

  else
    { for (i=0;i<nr;i++)
        { if ( output_format == 1 )
            printf("%d ",rbuf[i]);
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
    {   sleep(RETRY_TIME);
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
  printf("                 k - Read temperature from ktermocoupler max31855 \n");
  printf("                 -i2c <address> : Use i2c interface protocol\n");
  printf("                 -v[0-1] : Print version info -v0 version number only \n");
  printf("                                               -v1 Release note only \n");
  printf("Options:\n");
  printf("                 -d[0-9] : Enable debug level[0-9]\n");
  printf("                 -o[d|b] : Specify output format. Default Hex \n");
  printf("                                              -od Decimal\n");
  printf("                                              -ob Binary \n");
  printf("Config files:\n");
  printf("                 .com_i2c : If file exist and contains valid i2c address. Use i2c interface \n");
  printf("                            and protocol with given address\n");
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
{
  if ( ((digit >=0x30) & (digit <= 0x39)) || ((digit >= 'a') & (digit <= 'f')) || ((digit >= 'A') & (digit <= 'F')) )
    {
      if (digit <= 0x39 )
        { return digit-0x30; }
      else if (digit <= 0x46)
        { return digit-0x41+10; }               // Capital case : A - F
      else
        { return digit-0x61+10; }               // Low case     : a - f
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

#ifdef RPI
int getch(){
  return 0;
}
#endif

#ifdef X86_LINUX
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
#endif
