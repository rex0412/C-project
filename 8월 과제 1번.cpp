#include <stdio.h>
 main( ) {
int a, b, sum=0;
int num[3][3]={{1,2,3},{4,5,6},{7,1,6}};
 for(a=0; a<=2; a++)
   for(b=0; b<=2; b++)
      if(a==b)
         sum = sum + num[a][b];
    printf("%d", sum);
}
