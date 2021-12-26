#include <stdio.h>
main( ) {
int a[4][4];
int k, m, sum = 0;
for(k = 0; k <= 3; k++)
   for(m = 0; m <= 3; m++)
      a[k][m] = 2 * k + m;
for(k = 0; k <= 3; k++)
    sum = sum + a[k][k];
printf("%d\n", sum);
}
