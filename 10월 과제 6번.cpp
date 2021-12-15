#include <stdio.h>
long fac(int da);
main( ){
int a = 5;
long re;
re = fac(a);
printf("%ld", re);
}
long fac(int da){
if(da == 1)
    return 1;
 else
    return da * fac(da-1);
}
