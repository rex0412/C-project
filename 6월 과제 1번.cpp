#include <stdio.h>
 main( ) {
 int a, b, k;
 int m[8] = {4, 12, 19, 5, 8, 6, 3, 7};
   a = m[0];
   b = m[0];
for(k = 0; k <= 7; k++) {
   if(m[k] > a)
     a = m[k];
   else 
     if(m[k] < b)
      b = m[k];
 }
 printf("%d ", a - b);
}
