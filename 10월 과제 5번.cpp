#include <stdio.h>
int Add(int k);
main( ) {
int sum;
sum = Add(5);
printf("%d", sum);
}
int Add(int k) {
if(k == 1)
   return 1;
 else
   return k + Add(k - 1);
}
