/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <mysql.h>
#include "argparse.h"

char * replace( char const * const original, char const * const pattern, char const * const replacement);

//
// cli for generate include symbols for Merus audio register map
// Written by Jorgen Kragh Jakobsen, Merus Audio, 2016
// Revision History
// Rev 22.11.2016/JKJ: Init added to Merus Madlib
//
//     24.11.2016/JKJ: Is madlib the right place for this. Register DB marb/2 could be an option
//     25.11.2016/JKJ: Code will live in scom/build_include. All symbol/db live here anyway
//                     Added s_ and r_ function like macros for all symbols
//                     struct x.y in symbols escaped ot x__y
//     16.12.2016/JKJ: Simplify and spiteup
//                     For arduion usage a object can be added for read / write object
//                     For Symbols size 8 - no read is done on read modyfy write
//     23.2.2017/JKJ:  Sorted registers by address - Removed database id debug info
//                     read_... -> get_...
//                     scom_r/w -> ma_read_byte and ma_write_byte
//                     updated description
//     8.11.2017/JKJ:  Rework, major upgrade to support ma120 database version 2
//      1.3.2018/JKJ:  Added wr/ro to defines and commaperated output.
//      12.3.2018/JKJ: Added .reg_db_<databasename> to output options. Added structured command line argument framework
//      24.5.2018/JKJ: Added access integer
//       5.9.2019/JKJ: Added output format for System Verilog enum type SYSVER
//       4.9.2020/JKJ: Moved sql database source from big to IFX 
//    
//
//-----------------------------------------------------------------------------------------------------------
//
// Usage: build_include register_table_name <a(ll)|p(ublic)> <db[1|2]>

typedef struct top_segments {
  char segment[64];
  int address;
  int size;
} top_segment;

enum output_format_type { LIB, HTML, CVS, REG_FILE, SYSVER };
unsigned char access_html_str[6][1024] = {"Basic protocol","TBD","State machine<br>ACFG protocol","Basic protocol<br>4 bytes data words","Basic protocol<br>PVDD = 7.2V<br>accesstime 1 msec"};
unsigned char test_html_str[6][1024] = {"Scantest", "Functional", "Functional","Bist","Verify on write" };
unsigned char span_html_char[6] = { 10, 1, 13,2,1} ;
unsigned int debug = 0;

static const char *const usage[] = {
    "build_include [options] [[--] args]",
    "build_include [options]",
    NULL,
};

int main(int argc, const char  **argv)
{
  int db_version = 1;
  unsigned char *database_table_name = NULL;
  database_table_name = malloc(128);
  int output_format = LIB;                                   // 0:LIB, 1:HTML, 2:CSV
  int with_access_level = 0;
  int with_macros = 0;
  int public = 0;                                            // Boolian
  int debug = 0;                                             // Verbose 0: normal, 1:debug

  unsigned char db_version_str[2][128] = {"MA120x0","MA120  "};
  unsigned char include_str[2][128] = {"_MA120X0_H_","_MA120_H_"};

  unsigned char str[256];
  unsigned char line[512];
  unsigned char symbol[128];
  int output_ok = 0;

  // Check integrity of database
  unsigned char dev_mem_mapped[0x9000] = {0};
  unsigned char dev_mem_reset[0x9000] = {0};
  unsigned char dev_mem_volatile[0x9000] = {0};
  unsigned char mask;
  int addr_allocation_error = 0;
  FILE *db_name;
  MYSQL *conn;
  if (debug) printf("MySQL client version: %s\n", mysql_get_client_info());
  MYSQL_RES *result;
  MYSQL_ROW row;

  struct argparse_option options[] = {
    OPT_HELP(),
	OPT_GROUP("Basic options"),
	OPT_INTEGER('d',"db_version",&db_version, "database version 1 or 2"),
	OPT_STRING('t',"database.table",&database_table_name, "Database and table name"),
	OPT_INTEGER('o',"output_format",&output_format, "Output format <0:LIB|1:HTML|2:CSV|3:REG_FILE|4:SYSTEMVERILOG>"),
	OPT_BOOLEAN('p',"public",&public, "Private or public address supplyed to" ),
	OPT_BOOLEAN('v',"verbose",&debug, "Debug switch verbose option"),
	OPT_BOOLEAN('a',"access",&with_access_level, "Define symbol for access level"),
	OPT_BOOLEAN('m',"macros",&with_macros, "Define macros for read/write"),
	OPT_END(),
  };
  struct argparse argparse;
  argparse_init(&argparse, options, usage, 0);
  argc = argparse_parse(&argparse, argc, argv);

  if (debug)
  { printf("argc :%d \n",argc);
    printf("Debug :\n");
    printf("db_version    : %d \n",db_version);
    printf("public        : %d \n",public);
    printf("output_format : %d \n",output_format);
    printf("db.table      : %s \n",database_table_name);
	printf("access_level  : %d \n",with_access_level);
	printf("macros        : %d \n",with_macros);
	printf("debug         : %d \n",debug);
  }

  time_t ltime; /* calendar time */
  ltime=time(NULL); /* get current cal time */
  unsigned char timestamp[64];

  sprintf(timestamp,"%s",asctime( localtime(&ltime) ) );
  timestamp[strlen(timestamp)-1] = 0;
  if (output_format == LIB)
  {
    printf("/*---------------------------------------------------------------------------------------*/\n");
    printf("/*   Merus Audio %s register map                                                    */\n",db_version_str[db_version-1] );
    printf("/*                                                                                       */\n");
    printf("/*   Provides : Defines for registers and symbols in merus audio amplifiers              */\n");
    printf("/*              Macros for set and get content of symbols                                */\n");
    printf("/*              Read-modify-write on write to symbols less then 8 bits                   */\n");
    printf("/*                                                                                       */\n");
    printf("/*   Symbols is a collection of 1 to 8 bits within a single address                      */\n");
    printf("/*                                                                                       */\n");
    if (public == 1)
      printf("/*   Provided as is - free to use and share                                              */\n");
    else
      printf("/*   Provided as is for internal use only - do not copy - do not share                   */\n");
    printf("/*                                                                                       */\n");
    printf("/*   Timestamp                        : %48s */\n",timestamp);
    printf("/*   Created from database            : %48s */\n",database_table_name);
    printf("/*   Errors and updates please contact:       Jorgen Kragh Jakobsen, jkj@merus-audio.com */\n");
    printf("/*---------------------------------------------------------------------------------------*/\n");
    printf("\n");
    printf("#include <stdint.h>\n");
    printf("\n\n");
    printf("#ifndef %s\n",include_str[db_version-1]);
    printf("#define %s\n",include_str[db_version-1]);
    printf("\n\n");
  }
  else if (output_format == HTML)
  { printf("<!DOCTYPE html>\n");
    printf("<html lang=\"en\">\n");
    printf("<head>\n");
    printf("  <meta charset=\"utf-8\">\n");
    printf("  <title>title</title>\n");
    printf("  <link rel=\"stylesheet\" href=\"style.css\">\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("<table border=1>\n");
    printf("<tr><th>Access</th><th>Type</th><th>Segment</th><th>Address</th><th>Test method</th>");
  }
  else if (output_format == CVS)
  { printf("#---------------------------------------------------------------------------------------*/\n");
    printf("#   Merus Audio %s register map                                                    */\n",db_version_str[db_version-1] );
    printf("#                                                                                       */\n");
    printf("#   Provides : Comma seperated version of symbol database for merus audio amplifiers    */\n");
    printf("#                                                                                       */\n");
    printf("#   Symbols is a collection of 1 to 8 bits within a single address                      */\n");
    printf("#                                                                                       */\n");
    if (public == 1)
      printf("#   Provided as is - free to use and share                                              */\n");
    else
      printf("#   Provided as is for internal use only - do not copy - do not share                   */\n");
    printf("#                                                                                       */\n");
    printf("#   Timestamp                        : %48s */\n",timestamp);
    printf("#   Created from database            : %48s */\n",database_table_name);
    printf("#   Errors and updates please contact:       Jorgen Kragh Jakobsen, jkj@merus-audio.com */\n");
    printf("#---------------------------------------------------------------------------------------*/\n");
  }
  else if (output_format == REG_FILE)
  {}
  else if (output_format == SYSVER)
  {
    printf("/*---------------------------------------------------------------------------------------*/\n");
    printf("/*   Merus Audio %s register map                                                    */\n",db_version_str[db_version-1] );
    printf("/*                                                                                       */\n");
    printf("/*   Provides : System Verilog defines for top level access                              */\n");
    printf("/*                                                                                       */\n");
    printf("/*   Symbols is a collection of 1 to 8 bits within a single address                      */\n");
    printf("/*                                                                                       */\n");
    if (public == 1)
      printf("/*   Provided as is - free to use and share                                              */\n");
    else
      printf("/*   Provided as is for internal use only - do not copy - do not share                   */\n");
    printf("/*                                                                                       */\n");
    printf("/*   Timestamp                        : %48s */\n",timestamp);
    printf("/*   Created from database            : %48s */\n",database_table_name);
    printf("/*   Errors and updates please contact:        Jorgen, jorgen.kraghjakobsen@infineon.com */\n");
    printf("/*---------------------------------------------------------------------------------------*/\n");
    printf("`ifndef _%s_v_\n",database_table_name);
    printf("`define _%s_v_\n",database_table_name);
    printf("// Common Read / Write macro\n" );
    printf("`define READ_REG(REG,x) read_i2c(`REG``__a,tmp_data);x=(tmp_data & `REG``__mask) >> `REG``__shift;\n");
    printf("`define WRITE_REG(REG,x) read_i2c(`REG``__a,tmp_data);write_i2c(`REG``__a,(tmp_data & ~`REG``__mask) | ((x<<`REG``__shift) & `REG``__mask));\n");
    printf("\n");

  }

  int n=0,i;
  conn = mysql_init(NULL);

  if (db_version == 1) {
	  mysql_real_connect(conn, "192.168.1.21", "jakobsen", "merussql", NULL, 0, NULL, 0);
	  mysql_query(conn, "use merus_ic_trunk");
  } else if (db_version == 2) {
	  mysql_real_connect(conn, "devrd-db.vih.infineon.com", "merus_r01", "1zqFkTgxGTYMg.U", NULL, 0, NULL, 0);
	  mysql_query(conn, "use merus");
  } else {
	  printf("Error\n");
	  exit(-1);
  }

  if (db_version == 1)            //  --------------------- DB version 1
  {

    sprintf(str,"select * from %s order by address",database_table_name);
    if (debug) printf("sql :%s\n",str);
    mysql_query(conn, str);
    result = mysql_store_result(conn);
    int dot;
    int addr,pos,size,reset,hidden,input_only;
    while (row = mysql_fetch_row(result))
    { addr  = atoi(row[2]);
      pos   = atoi(row[3]);
	  size  = atoi(row[4]);
	  reset = atoi(row[5]);
	  strcpy(symbol,row[1]);
  	  dot = 0;
	  for (i=0;i<strlen(row[1]);i++)
	  { if (dot == 1)
	    { symbol[i+1] = row[1][i];
	    }
	    if (symbol[i] == '.')
	    { symbol[i] = '_';
	      symbol[i+1] = '_';
	      dot = 1;
	    }
	  }
	  if (dot)
	    symbol[i+1] = 0;
      // Do


    if (row[12] == NULL) { hidden = 0; }
	  else if ( row[12][0] == '1') { hidden = 1; }
	  else { hidden = 0; }
	  if (hidden == 0 | public == 0 )
	  {  if (output_format == REG_FILE)
		 {  printf("%s 0x%04x %d %d %d %s\n",symbol,addr,pos,size,reset,row[8]);
         }
		 else if (output_format == LIB)
	     { printf("//------------------------------------------------------------------------------%s---\n",row[1]);
	       printf("// %s \n",row[8]);
	       printf("#define MA_%s__a %d\n",symbol, addr);
	       printf("#define MA_%s__len %d\n",symbol, size);
           printf("#define MA_%s__mask 0x%02x\n",symbol, ((1<<size)-1)<<pos);
	       printf("#define MA_%s__shift 0x%02x\n",symbol, pos);
	       printf("#define MA_%s__reset 0x%02x\n",symbol, reset);
	       if (with_macros == 1)
		   {
		     if (size == 8)  // do not do read modify write, only write part done
	         { printf("#define set_obj_MA_%s(o,y) o.write(%d,y);\n",symbol,addr);
	           printf("#define set_MA_%s(y) ma_write_byte(%d,y);\n",symbol,addr);
	         }
	         else
	         { printf("#define set_obj_MA_%s(o,y) ({ uint8_t __ret = o.read(%d); o.write(%d,(__ret&0x%02x)|((y<<%d)&0x%02x)); }) \n",symbol,addr,addr,(~(((1<<size)-1)<<pos))&0xff,pos,(((1<<size)-1)<<pos)&0xff);
               printf("#define set_MA_%s(y) ({ uint8_t __ret = ma_read_byte(%d); ma_write_byte(%d,(__ret&0x%02x)|((y<<%d)&0x%02x)); }) \n",symbol,addr,addr,(~(((1<<size)-1)<<pos))&0xff,pos,(((1<<size)-1)<<pos)&0xff);
             }
	         printf("#define get_obj_MA_%s(o) (o.read(%d) & 0x%02x)>>%d \n",symbol, addr ,((1<<size)-1)<<pos ,pos);
	         printf("#define get_MA_%s() ( ma_read_byte(%d) & 0x%02x)>>%d \n",symbol, addr ,((1<<size)-1)<<pos ,pos);
	         n++;
           }
		   else if (output_format == CVS)
		   {  printf("%s 0x%04x %d %d %d %s\n",symbol,addr,pos,size,reset,row[8]);
           }
		 }
	  }
    }
  }

  if (db_version == 2)         // DB version 2 .............................................................
  {
    top_segment ts[10];
    top_segment tse[5][32];

    sprintf(str,"select * from sl_%s where type=segment order by address",database_table_name);
    if (debug) printf("sql :%s\n",str);
    mysql_query(conn, str);
    result = mysql_store_result(conn);
    i = 0;
    while (row = mysql_fetch_row(result))
    { strcpy(ts[i].segment,row[1]);
      ts[i].address = atoi(row[2]);
      ts[i].size    = atoi(row[3]);
      i++;
    }
    if (debug) { printf("found %d segments \n",i); }
	int ntopsegments = i;
    for (i = 0; i<ntopsegments; i++)
    { int j = 0;
      if (debug) { printf("%d : %s 0x%04x 0x%04x\n",i,ts[i].segment,ts[i].address,ts[i].size); }

      sprintf(str,"select * from sl_%s where type=\"%s\" and segment!=\"%s\"",database_table_name,ts[i].segment,ts[i].segment);
      mysql_query(conn, str);
      result = mysql_store_result(conn);
      while (row = mysql_fetch_row(result))
      { strcpy(tse[i][j].segment,row[1]);
        tse[i][j].address = atoi(row[2]);
        tse[i][j].size    = atoi(row[3]);
        j++;
      }
      int nsection = j;
      for (j=0;j<nsection; j++)
      { if (output_format == HTML)
        { if (j==0)
          { printf("<tr><td rowspan=%d>%s</td><td>%s</td><td>%s</td><td>0x%04x</td><td rowspan=%d>%s</td></tr>\n",span_html_char[i],
                                                                                                            access_html_str[i],ts[i].segment,
                                                                                                            tse[i][j].segment,
                                                                                                            ts[i].address,
                                                                                                            span_html_char[i],
                                                                                                            test_html_str[i]);
          }
          else
          { printf("<tr><td>%s</td> <td>%s</td></tr>\n", ts[i].segment,tse[i][j].segment);
          }
        }
        int addr, pos, size, reset, hidden, input_only;
        sprintf(str,"select * from rs_%s where segmentType=\"%s\" and segment=\"%s\"",database_table_name,ts[i].segment,tse[i][j].segment);
        //printf("debug:%s \n",str);
		mysql_query(conn, str);
        result = mysql_store_result(conn);
        int k = 0;
        char * symbolpadded;
        symbolpadded = malloc(128);
        char symbol_dot[128];
		while (row = mysql_fetch_row(result))
        {
          symbolpadded = replace(row[2],".","__");
          sprintf(symbol,"%s__%s__%s",ts[i].segment,row[1],symbolpadded);
          sprintf(symbol_dot,"%s.%s.%s",ts[i].segment,row[1],row[2]);
		 //sprintf(symbol,"%s__%s__%s",ts[i].segment,row[1],row[2]);
		  if (ts[i].address == 0x0600)
		  { addr  = atoi(row[3]) + tse[i][j].address*8 + ts[i].address  ;// Add segment address
		  } else
		  { addr  = atoi(row[3]) + tse[i][j].address + ts[i].address ;// Add segment address
		  }
          pos   = atoi(row[4]);
          size  = atoi(row[5]);
          reset = atoi(row[6]);
		  input_only = atoi(row[7]);
          hidden = atoi(row[11]);

          //--------------------------------------------------------------------------------------------------------------------
          // Do intregity check
          // Only in address space below 0x1000
          //-------------------------------------------------------------------------------------------------------------------
          mask  = (((1<<size)-1)<<pos);
          if (addr < 0x9000)
          { //printf("XXX debug: 0x%04x mapped : 0x%02x , Mask: 0x%02x\n",addr, dev_mem_mapped[addr], mask );
            if ((dev_mem_mapped[addr] & mask) == 0)
            { dev_mem_mapped[addr] = dev_mem_mapped[addr] | mask;
              dev_mem_reset[addr] = dev_mem_reset[addr] | reset<<pos ;
              dev_mem_volatile[addr] = dev_mem_volatile[addr] + input_only;
            }
            else
            {
              printf("----------------------------------------------------------------------------------------\n");
              printf("------------ERROR double allocation in register map-------------------------------------\n");
              printf("----------------------------------------------------------------------------------------\n");
              printf("Error number : %d \n",addr_allocation_error++);
              printf("Address : 0x%04x \n",addr);
              printf("Symbol  : %s\n",symbol_dot);
            }
          }

		  //if (row[11] == NULL) { hidden = 0; }
	      //else if ( atoi(row[11]) == 1 ) { hidden = 1; }
	      //else { hidden = 0; }

		  if (hidden == 0 | public == 0 | with_access_level == 1)
	      { if (output_format == REG_FILE)
		    {  printf("%s 0x%04x %d %d %d %s\n",symbol_dot,addr,pos,size,reset,row[12]);
            }
			  else if (output_format == LIB)
            { if (debug)
              { printf("// %s %s %s %d %d %d %d %d %d \n",ts[i].segment,row[1],symbol,tse[i][j].address,addr,pos,size,reset,hidden);
              }
              printf("//------------------------------------------------------------------------------%s---\n",symbol);
	          printf("// %s\n",row[12]);
	          printf("#define MA_%s__a 0x%04x\n",symbol, addr);
	          printf("#define MA_%s__len %d\n",symbol, size);
              printf("#define MA_%s__mask 0x%02x\n",symbol, ((1<<size)-1)<<pos);
	          printf("#define MA_%s__shift 0x%02x\n",symbol, pos);
	          printf("#define MA_%s__reset 0x%02x\n",symbol, reset);
	          printf("#define MA_%s__inputonly %d\n",symbol, input_only);
			  if (with_access_level == 1 )
			    printf("#define MA_%s__accesslevel %d\n",symbol, hidden );
			  if (with_macros == 1)
		      {
		        if (size == 8)  // do not do read modify write, only write part done
	            { printf("#define set_obj_MA_%s(o,y) o.write(%d,y);\n",symbol,addr);
	              printf("#define set_MA_%s(y) ma_write_byte(%d,y);\n",symbol,addr);
	            }
	            else
	            { printf("#define set_obj_MA_%s(o,y) ({ uint8_t __ret = o.read(%d); o.write(%d,(__ret&0x%02x)|((y<<%d)&0x%02x)); })\n",symbol,addr,addr,(~(((1<<size)-1)<<pos))&0xff,pos,(((1<<size)-1)<<pos)&0xff);
                  printf("#define set_MA_%s(y) ({ uint8_t __ret = ma_read_byte(%d); ma_write_byte(%d,(__ret&0x%02x)|((y<<%d)&0x%02x)); })\n",symbol,addr,addr,(~(((1<<size)-1)<<pos))&0xff,pos,(((1<<size)-1)<<pos)&0xff);
                }
	            printf("#define get_obj_MA_%s(o) (o.read(%d) & 0x%02x)>>%d\n",symbol, addr ,((1<<size)-1)<<pos ,pos);
	            printf("#define get_MA_%s() ( ma_read_byte(%d) & 0x%02x)>>%d\n",symbol, addr ,((1<<size)-1)<<pos ,pos);
	            n++;
              }
			}
            else if (output_format == HTML)
            {
              //printf(".");
            }
            else if (output_format == SYSVER)
            {
              printf("//------------------------------------------------------------------------------%s---\n",symbol);
	            printf("// %s\n",row[12]);
              printf("`define MA_%s__a 'h%04x\n",symbol, addr);
	            printf("`define MA_%s__len %d\n",symbol, size);
              printf("`define MA_%s__mask 'h%02x\n",symbol, ((1<<size)-1)<<pos);
	            printf("`define MA_%s__shift %d\n",symbol, pos);
	            printf("`define MA_%s__reset 'h%02x\n",symbol, reset);
              printf("\n");
             }

            else if (output_format == CVS)
		    { printf("%s 0x%04x %d %d %d\n",symbol_dot,addr,pos,size,reset);
		    }
		  }
		}
      }
    }
    int dot;
    int addr,pos,size,reset,hidden;

    if (output_format == LIB)
    { printf("/* db_version 2 entries*/\n");
    }
    else if (output_format == HTML)
    { printf("</table>\n");
    }
    else if (output_format == SYSVER)
    {
      printf("// End symbol def\n");
      printf("`endif   //_%s_v_\n",database_table_name);
    }
  }
  // Print header fench end

  if (output_format == LIB)
  {
    // Add define fench symbol

	// dump reset values if requested;

	if (db_version == 2)
    { // Build Reset values array
      printf("// Define reset value for core and mlpin segment \n");
	  printf("#ifndef DISABLE_RESET_VALUES\n");

	  printf( "int MA120_reset[0x600] = { ");
      for (i=0; i<0x5ff; i++)
      { if ((i%16) == 0 & (i>0) )
          printf(" // 0x%04x to 0x%04x \n                           ",i-16,i-1);
        printf("0x%02x,",dev_mem_reset[i]);
      }
      printf("0x%02x }; // 0x05f0 to 0x05ff \n",dev_mem_reset[0x5ff]);

      // Build mapped values array
      printf( "int MA120_mapped[0x600] = { ");
      for (i=0; i<0x5ff; i++)
      { if ((i%16) == 0 & (i>0) )
          printf(" // 0x%04x to 0x%04x \n                           ",i-16,i-1);
        printf("0x%02x,",dev_mem_mapped[i]);
      }
      printf("0x%02x }; // 0x05f0 to 0x05ff \n",dev_mem_mapped[0x5ff]);

      // Build volatile values array
      printf( "int MA120_volatile[0x600] = { ");
      for (i=0; i<0x5ff; i++)
      { if ((i%16) == 0 & (i>0) )
          printf(" // 0x%04x to 0x%04x \n                           ",i-16,i-1);
        printf("0x%02x,",dev_mem_volatile[i]);
      }
      printf("0x%02x }; // 0x05f0 to 0x05ff \n",dev_mem_volatile[0x5ff]);

	  printf("#endif  /* DISABLE_RESET_VALUES */\n");
    }
    printf("\n#endif   /* %s*/\n", include_str[db_version-1]);
  }
  else if (output_format == HTML)
  { printf("</body>\n");
    printf("</html>\n");
  }
  exit(0);
}

char * replace(
    char const * const original,
    char const * const pattern,
    char const * const replacement
) {
  size_t const replen = strlen(replacement);
  size_t const patlen = strlen(pattern);
  size_t const orilen = strlen(original);

  size_t patcnt = 0;
  const char * oriptr;
  const char * patloc;

  // find how many times the pattern occurs in the original string
  for (oriptr = original; patloc = strstr(oriptr, pattern); oriptr = patloc + patlen)
  {
    patcnt++;
  }

  {
    // allocate memory for the new string
    size_t const retlen = orilen + patcnt * (replen - patlen);
    char * const returned = (char *) malloc( sizeof(char) * (retlen + 1) );

    if (returned != NULL)
    {
      // copy the original string,
      // replacing all the instances of the pattern
      char * retptr = returned;
      for (oriptr = original; patloc = strstr(oriptr, pattern); oriptr = patloc + patlen)
      {
        size_t const skplen = patloc - oriptr;
        // copy the section until the occurence of the pattern
        strncpy(retptr, oriptr, skplen);
        retptr += skplen;
        // copy the replacement
        strncpy(retptr, replacement, replen);
        retptr += replen;
      }
      // copy the rest of the string.
      strcpy(retptr, oriptr);
    }
    return returned;
  }
}
