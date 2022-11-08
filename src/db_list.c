#include <mariadb/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int debug = 0;

int main(int argc, char* argv)
{ 
  unsigned char str[128];
  //unsigned char line[128];
  //unsigned char db_table[128];
  //FILE *db_name;
  MYSQL *conn;
  if (debug) printf("MySQL client version: %s\n", mysql_get_client_info());
  MYSQL_RES *result;
  MYSQL_ROW row;
  conn = mysql_init(NULL);
  mysql_real_connect(conn, "big.merus.lan", "jakobsen", 
          "merussql", NULL, 0, NULL, 0);
  mysql_query(conn, "use merus_ic_trunk");

//  mysql_real_connect(conn, "devrd-db.vih.infineon.com", "merus_r01", 
//          "1zqFkTgxGTYMg.U", NULL, 0, NULL, 0); 
//  mysql_query(conn, "use merus");

  sprintf(str,"select register_map from master_register_map");
  mysql_query(conn, str);
  result = mysql_store_result(conn);
  while (row = mysql_fetch_row(result))
  { if (strcmp(row[0],"new_table_name")!=0) 
    { printf("%s ",row[0]);
    }
  }   
  exit(0);
}
