#include <stdio.h>
main( ){
int n[4][4]={0,};
int a, b, s = 0;
for(a = 0; a <= 3; a++) {
  for(b = 0; b <= 3; b++) {
    if(a == b) n[a][b] = 3;
    if( a < b) n[a][b] = 2;
    if( a > b) n[a][b] = 1;
   }
 }
for(a = 0; a <= 3; a++)
  for(b = 0; b <= 3; b++)
    s  = s + n[a][b];
printf("%2d", s);
}
