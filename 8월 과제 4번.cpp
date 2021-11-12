#include <stdio.h>
main( ) {
int a[3][3];
int k, m, sum = 0;
for(k = 0; k <= 2; k++)
   for(m = 0; m <= 2; m++)
      a[k][m] = 2 * k + m;
for(k = 0; k <= 2; k++)
    sum = sum + a[k][k];
printf("%d\n", sum);
}
