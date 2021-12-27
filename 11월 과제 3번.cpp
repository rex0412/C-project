#include <stdio.h>
main( ) {
int a, b, k, m;
int n[4][4] = {{7, 6, 9, 5}, {9,12,3,8}, {8, 5, 4, 10}};
a = n[0][0];
b = n[0][0];
for(k = 0; k <= 3; k++){
  for(m = 0; m <= 3; m++){
    if(a > n[k][m] )
      a = n[k][m];
    else if ( b < n[k][m])
           b = n[k][m];
   }
 }
printf("%d %d ", a, b);
}
