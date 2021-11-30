#include <stdio.h>
int prime(int k);
main( ){
int a, sum = 0;
for ( a = 1; a <= 10; a++){
   sum = sum + prime(a);
 }
 printf("%d", sum);
}
int prime(int k){
int m;
for(m = 2; m < k ; m++){
  if(k % m == 0)
    break;
 }
if(k == m)
  return k;
else
  return 0;
}
