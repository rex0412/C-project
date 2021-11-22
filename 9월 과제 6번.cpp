#include <stdio.h>
 main( ) {
 int a, b, temp;
 int k[5]={51, 9, 22, 6, 15};
 for(a=1; a <= 3; a++){
 for(b=a+1; b <= 4; b++)
     if(k[a] < k[b]){
        temp=k[a];
        k[a]=k[b];
        k[b]=temp;
   }
  }
 printf("%d", k[3]);
} 
