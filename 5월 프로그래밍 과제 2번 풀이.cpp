#include <stdio.h>
main( ) {
int n;
for(n=1; n<=20; n++) {
    if(n%2 == 0 || n%3 == 0)
      continue;
    printf("%3d", n);
 }
}
