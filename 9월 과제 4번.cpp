#include <stdio.h>
main( ){
int a, b, s, k;
int dt[7] = {18, 29, 14, 7, 3, 17, 8};
a = b = s = dt[0];
for(k = 1; k <= 6; k++) {
   s = s + dt[k];
     if(a < dt[k])
       a = dt[k];
     if(b > dt[k])
       b = dt[k];
 }
 printf("%3d", s-a-b);
}
