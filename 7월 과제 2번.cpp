#include <stdio.h>
 main( ){
int num[5][5];
int a, b, n;
for(a = 1; a <= 4; a++) {
   for ( b= 1; b <= 4; b++) {
       n = a + b - 1;
       if(n > 4)
          num[a][b] = n - 4;
       else
          num[a][b] = n;
    }
 }
 for(a = 1 ; a <= 4; a++) {
    for(b = 1; b <= 4; b++)
       printf("%3d", num[a][b]);
    printf("\n");
   }
 }
