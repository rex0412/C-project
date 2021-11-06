#include <stdio.h>
 main( ) {
int cnt, num[3][3] = {0,};
int x, y;
 cnt = 0;
 y = 0;
 x = 1;
 while(cnt < 9) {
    cnt = cnt + 1;
    if(y < 0 && x > 2){
       y = y + 2;
       x = x - 1;
    }
    else if(y < 0)
            y = 2;
         else if(x > 2)
                 x = 0;
              else if(num[y][x] != 0) {
             y = y + 2;
             x = x - 1;
          }
    num[y][x] = cnt;
    y = y - 1, x = x + 1;
  }
 for(y = 0; y <= 2; y++){
    for(x = 0; x <= 2; x++)
        printf("%2d", num[y][x]);
    printf("\n");
  }
 }
