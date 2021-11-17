#include <stdio.h>
main( ) {
int num[3][3]={{4, 6, 5}, {7, 9, 2}, {8, 3, 5}};
int k, m, sum=0;
for(k = 0; k <= 2; k++)
  for(m = 0; m <= 2; m++)
    if(num[k][m] % 3 == 0)
       sum = sum + num[k][m];
printf("%2d", sum);
}
