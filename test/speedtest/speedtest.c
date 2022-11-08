
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

typedef struct mytimeval { 
 long int tv_sec; 
  long int tv_usec; } mytimeval;


int main(int argc, char **argv)
{
  int i;
  int n = atoi(argv[1]);
  mytimeval t1,t2;
  double avg = 0;
  
 
  gettimeofday(&t1, NULL);
  for (i=0;i<n;i++)
  { system("scom r 0 8");
  } 
  
  gettimeofday(&t2, NULL);
  
//  avg = (t2.tv_sec - t1.tv_sec) * 1000.0; 
  avg =+ (t2.tv_usec - t1.tv_usec) /1000.0;
  printf("Time %f ms\n", avg);
}
  
  
  
