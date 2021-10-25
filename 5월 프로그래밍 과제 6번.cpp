#include <stdio.h>
main( ) {
int n1=7, n2=3;
int sum=0, tmp;
if(n1 > n2) {
  tmp = n1;
   n1 = n2;
   n2 = tmp;
}
for(n1 = n1; n1 <= n2; n1++)
     sum = sum + n1;
printf("%d", sum);
}
