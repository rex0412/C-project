#include <stdio.h>
int fun(int k, int m);
main( ) {
int a, x = 10, y = 20;
a = fun(x, y);
printf("%d", a);
}
int fun(int k, int m) {
int s;
s = k + m;
return s;
}
