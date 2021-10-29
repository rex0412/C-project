#include <stdio.h>
main( ){
int n[5]={40, 87, 55, 65, 76};
int a, b, r[5];
 for(a = 0; a < 5; a++){
   r[a] = 1;
for(b = 0; b < 5; b++)
   if(n[a] < n[b])
     r[a] = r[a] + 1;
 }
 printf("%2d", r[2]);
    printf("\n");
 }
