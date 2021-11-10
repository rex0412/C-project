#include <stdio.h>
 main( ) {
 char d[ ]={'A', 'B', 'C', 'D'};
 int k[ ] = {0, 2, 0, 3, 3};
 int a;
 for(a=0; a <= 4; a++)
    printf("%c", d[k[a]]);
}
