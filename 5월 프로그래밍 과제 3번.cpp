#include<stdio.h>
 main( ) {
 int k, s, a = 0, b = 0, d = 0;
 for(k = 1; k <= 3; k++) {
     for(s = 1; s <= 3; s++) {
          a = k * k;
          b = b + a; 
    }
    d = d + b;
 }
 printf("%d", d);
}
