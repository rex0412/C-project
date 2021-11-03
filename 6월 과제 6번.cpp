#include <stdio.h>
 main( ) {
int k, m, sum=0;
int n1[5] = {1, 3, 2, 5, 7};
int n2[5] = {1, 3, 5, 3, 4};
for(k = 0; k <= 4; k++) {
   for(m = 0; m <= 4; m++) {
      if(n1[k] == n2[m] )
         n2[m] = 0;
  }
}
for(k = 0; k <= 4; k++)
   sum = sum + n1[k] + n2[k];
printf("%d ", sum);
}
