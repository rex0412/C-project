#include <stdio.h>
 main( )  {
 char x[ ] =  "AABBB" ;
 char y[10];
 int a, b = 0, cnt = 0;
 for(a = 0; a < 5; a++)  
     if(x[a] == x[a+1])
         cnt = cnt + 1;
     else {  
        y[b] = x[a];
        y[b+1] = '0' + cnt + 1;
        b = b + 2;
        cnt = 0;
     }
for(a = 0; a < b; a++)
  printf("%c", y[a]);
}
