#include <mariadb/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <assert.h>

// Commandline lookup tool for complete
// db_lookup list all symbol in database
// Written by Jorgen Kragh Jakobsen, Merus Audio, 2013-
// Revision History
// rev 20.9.2015/JKJ : Added new lookup schema
//                     First check for of .reg_file_<database>
//                     Second check for .reg_db
//                     If no flag error
// rev 23.2.2017/JKJ : updated db address to big.merus.lan was hardcoded ip
//
// rev 24.8.2017/JKJ : Change order : 1. if .reg_file in current dir
//                                         read flags for database version 1: ma12040/70, version 2: ma120
//                                         read in symbols from file
//                                    2. else if .reg_db in current dir
//                                         read in database + tablename format : database.table or table
//                                         read in symbol from database
//                                    3. else
//                                         Print error message
// rev 2.11.2017/JKJ : Adds acfg to acfg symbols
// rev 3.11.2017/JKJ : Added arguments to call. If given look up return list of enum of given type from a full qualifying 
//                     symbolic name. if top as in top.segment not given. top = core. 
// rev 17.8.2020/JKJ : Move database repo to IFX server on gen2 lookups  
//

// To to change order of mysql init to after file detect .reg_file
//
//-----------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------symbol look up for commandline complete -----
//-----------------------------------------------------------------------------------------------------------

int res;
unsigned int debug = 0;
 
int main(int argc, char **argv)
{
  unsigned char str[128];
  unsigned char line[512];
  unsigned char *reg_db_str;
  unsigned char *db_database;
  unsigned char *db_table;
  unsigned char db_table_prefix[6] = "";
  unsigned char sql_select_prefix[32] = "";
  char symbol[256];
  int output_ok = 0;
  unsigned char db_version = 1;
  struct dirent *dp ;
  DIR *dirp ;
  FILE *db_file;
  FILE *db_name;
  

  // Open up .reg_file
  dirp = opendir(".");
  while ((dp = readdir(dirp)) != NULL)
  { if (strncmp(dp->d_name, ".reg_file", 8)==0)
    {  if (debug)
	       printf("Fund file : %s\n", dp->d_name);
         // open file and list sysmbols
	     db_file = fopen(dp->d_name,"r");
       if (fgets(line,512,db_file) != NULL) 
       { 
         sscanf(line,"%s*[^\n]",symbol);
         if (debug)
           printf("FirstLine: %s \n",symbol);
         while (fgets(line,512,db_file) != NULL)
	       { sscanf(line,"%s*[^\n]",symbol);
  	       printf("%s ",symbol);
           output_ok = 1;
	       }
         fclose(db_file);
       }
     }
  }
  (void)closedir(dirp);

  if (output_ok)
  { exit(1);
  }
 
  MYSQL *conn;
  if (debug) printf("MySQL client version: %s\n", mysql_get_client_info());
  MYSQL_RES *result;
  MYSQL_ROW row;
  conn = mysql_init(NULL);

  db_name = fopen(".reg_db", "r");
  if (db_name != NULL)
  { while (fgets(line, 128,db_name) != NULL )
    { reg_db_str = malloc(256);
      strcpy(reg_db_str,line); }
    fclose(db_name);
  } else
  { printf("No_database_table_in_.reg_db_or_reg_file_in_current_dir");
    exit(-1);
  }
  // Remove trail newline from reg_db_str;
  char *ptr;
  ptr = reg_db_str + strlen(reg_db_str) - 1  ;
  if (*ptr == 0x0a )
    *ptr = 0;

  // Check active connction to database and set version flag
  // Check and split if . in db_name. '.' indecate version 2 style  
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
    db_version = 1;  
  } else {
    db_database = token0;
    db_table = token1;
    db_version = 2; 
  }

  if (debug) { printf("Database: %s table: %s from %s \n", db_database, db_table, reg_db_str); }

  
  if (db_version == 1) {   
    if (mysql_real_connect(conn, "192.168.1.21", "jakobsen","merussql", db_database, 0, NULL, 0) == NULL)
    { fprintf(stderr,"%s\n" , mysql_error(conn));
      mysql_close(conn);
      exit(1);
    }
  }
  else 
  { if (mysql_real_connect(conn, "devrd-db.vih.infineon.com", "merus_r01","1zqFkTgxGTYMg.U", "merus", 0, NULL, 0) == NULL)
    { fprintf(stderr,"%s\n" , mysql_error(conn));
      mysql_close(conn);
      exit(1);
    }
  }
  
  if (db_version==2) 
  { if (argc>=2) 
	  {    
	    // Find if core has been left out and needs to be added 
	     // Check if top. is in [core|acfg|dsp|otp] else append "core."
	    char cmdline[128];
	    char reg_top[16] = "";
	   
	    strcpy(cmdline,argv[1]); 
	  
	    token0 = strtok(cmdline,s);
      token1 = strtok(NULL,s);
      if (strcmp(token0,"core")==0) 
	    {
	    } else if (strcmp(token0,"acfg")== 0)
	    {
	    } else if (strcmp(token0,"dsp")== 0)
	    {
	    } else if (strcmp(token0,"otp")== 0)
	    {
	    } else 
	    {
	      strcpy(reg_top,"core.");
	    }
	  
	    sprintf(str,"select symbol from en_%s where name=\"%s%s\"", db_table, reg_top,argv[1]); 
	    
      if (mysql_query(conn,str))
	    { fprintf(stderr,"%s\n" , mysql_error(conn));
        mysql_close(conn);
        exit(1);
	    } 
      result = mysql_store_result(conn);
      while (row = mysql_fetch_row(result))
      {
	    printf("%s ",row[0]);
	    }  
	    exit(0);
 	  }  
	  else 
	  { strcpy(db_table_prefix, "rs_");
      strcpy(sql_select_prefix, "segment,segmentType,");
    }
  }
  
  sprintf(str,"select %sname from %s%s ",sql_select_prefix,db_table_prefix,db_table);
  if (debug) { printf("SQL select: %s\n",str); }
 
  if(mysql_query(conn, str))
  { fprintf(stderr,"%s\n" , mysql_error(conn));
    mysql_close(conn);
    exit(1);
  }
  result = mysql_store_result(conn);
  while (row = mysql_fetch_row(result))
  { if (db_version == 2)
    { 
	    if (strcmp(row[1],"acfg")==0) 
	    {  printf("acfg.%s.%s ",row[0],row[2]);
	    } 
	    else if (strcmp(row[1],"otp")==0) 
	    {  printf("otp.%s.%s ",row[0],row[2]);
	    }
      else 
	    {  printf("core.%s.%s ",row[0],row[2]);
	    }
      
    }
    else
    { printf("%s ",row[0]);
    }
  }

  //printf("Allgood:\n");
  exit(0);
}
