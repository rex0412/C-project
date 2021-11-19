#include <stdio.h>
main( ){
int a,b,check[ ]={1, 1, 1, 1, 1};
int num[ ]={2, 8, 3, 12, 7};
for(a = 0; a < 5; a++) {
  for(b = 2; b < num[a]; b++){
    if(num[a] % b == 0){
       check[a]=0;
       break;
    }
  }
 }
 for(a = 0; a < 5; a++)
    printf("%3d", check[a]);
}
