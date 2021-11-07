#include <stdio.h>
main( ) {
int num1[5] = {1, 0, 1, 1, 0};
int num2[5] = {0, 0, 0, 0, 0};
int k;
int a;
for(k = 1; k <= 2 ; k++){
switch (k){
    case 1 :
      for(a = 1; a <= 4; a++)
        num2[a] = num1[a-1]; break;
    case 2 :
      for(a = 1; a <= 4; a++)
        num2[a-1] = num1[a]; break;
   }
 } 
 for(a = 0; a <= 4; a++)
   printf("%2d", num2[a]);
}
