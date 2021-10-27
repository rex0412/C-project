#include <stdio.h>
main( ) {
int n[6]={0, 3, 1, 5, 1, 4};
int a, k;
  for(a=1; a <= 5; a++){
     k = n[a];
     n[k] = n[a];
   }
for(a = 1; a <= 5; a++)
  printf("%d ", n[a]);
}
