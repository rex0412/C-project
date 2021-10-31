#include <stdio.h>
main( ) {
int k, m, sum=0;
int num[11];
for(k = 0; k <= 10; k++)
    num[k] = k;
 for(k = 2; k <= 10; k++) {
    if(num[k]) {
     sum = sum + num[k];
 for(m = k; m <= 10; m = m + k)
   num[m] = 0;
  }
 }
 printf("%d ", sum);
}
