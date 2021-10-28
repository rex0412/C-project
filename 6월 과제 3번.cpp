#include <stdio.h>
 main( ) {
int k, m, r;
int a[5] = {2, 3, 1, 4, 5};
int b[6] = {0, 0, 0, 0, 0, 0};
 for(k = 0; k <= 4; k++) {
   r = a[k] - 1;
   b[r] = b[r] + 1;
 }
for(k = 4; k >= 0 ; k--)
   b[k] = b[k] + b[k+1];
   
 for(k = 0; k <= 4; k++) {
   r = a[k]-1;
 printf("%d %d\n", a[k], b[r]);
 }
}
