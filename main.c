#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
  int*n;

  n=malloc(8);

  *n=517;

  printf("%i\n",*n);
  
}
  /*
  int N;    //Max number of iterations
  int i;
  unsigned long int r;
  unsigned long r2;
  
  N=100000;
  r=0;
  for(i=1;i<=N; i++){
    r=r+1;
  }
  printf("Max value=%lu\n", ULONG_MAX);
  printf("r=%u\n",r);

  printf("size r=%zu bytes \n",sizeof(r)*8);
  printf("size r2=%zu bytes \n",sizeof(r2)*8);
  return 0;
 }
  */
