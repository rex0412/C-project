#include <stdio.h>
main( ) {
int k, m,  n[21];
for(k = 2; k <= 20; k++){
  if(n[k] == 0)
    printf("%3d", k);
for(m=2*k; m <= 20; m=m+k)
   n[m]=1;
 }
}
