#include <stdio.h>
main( ){
int a, b, s = 0;
int n[4][4]={{1,2,3,4},{4,5,6,7},{5, 9, 8,10}};
for(a=0; a<=3; a++)
  for(b=0; b<=3; b++)
    if (a != b)
      s = s + n[a][b];
printf("%d", s);
}
