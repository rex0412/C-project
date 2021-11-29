#include <stdio.h>
int pt(int k);
 main( ) {
 int a = 10, b = 20;
 printf("%d %d\n", a, b);
 a = pt(a);
 b = pt(b);
 printf("%d %d\n", a, b);
}
int pt(int k) {
int m;
m = k + 5;
return m;
}
