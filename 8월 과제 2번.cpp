#include <stdio.h>
 main( ) {
int a, b, cnt=0;
int num[3][3] = {{1, 3, 5}, {2, 4, 6}, {7, 8, 9} };
for(a = 0; a <= 2; a++){
   for(b = 0; b <= 2; b++) {
     if(num[a][b] % 3 == 0 )
         cnt = cnt + 1;
    }
 }
 printf("%d", cnt);
}
