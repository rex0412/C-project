#include <stdio.h>
int even(int k);
main( ){
int a;
int sum = 0;
for(a = 1; a <= 10; a++)
    sum = sum + even(a);
 printf("%d", sum);
}
int even(int k){
if(k % 2 == 0)
   return k;
 else
   return 0;
}
