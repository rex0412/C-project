#include <stdio.h>
 main( ){
int a, b;
char str[4][7]={' ', };
for(a=0; a <= 3; a++)
  for(b=3-a; b <= 3+a; b++)
     str[a][b]='*';
 for(a=0; a <= 3; a++){
   for(b=0; b <= 6; b++)
      printf(" %c", str[a][b]);
 printf("\n");
 }
}
