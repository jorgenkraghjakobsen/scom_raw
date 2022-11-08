#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int debug = 0;

int main(int argc, char* argv)
{ 
  unsigned char str[128];
  unsigned char line[128];
  unsigned char db_table[128];
  FILE *db_name;
  MYSQL *conn;
  if (debug) printf("MySQL client version: %s\n", mysql_get_client_info());
  MYSQL_RES *result;
  MYSQL_ROW row;
  int n,i;
  conn = mysql_init(NULL);
  mysql_real_connect(conn, "192.168.1.21", "jakobsen", 
          "merussql", NULL, 0, NULL, 0);
  
  mysql_query(conn, "use jakobsen_lab");
  strcpy(db_table,"dc_offset_ma120x0p"); 
   
  sprintf(str,"select max(device_id) from %s ",db_table);
  mysql_query(conn, str);
  result = mysql_store_result(conn);
  while (row = mysql_fetch_row(result))
  { printf("%d",atoi(row[0])+1);
  }   
  exit(0);
}
