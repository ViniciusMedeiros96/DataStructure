#include <stdio.h>

int main (void){

    int a=5,b=6;

    int *x, *y, *z;

    x = &a;
    y = x;
    
    printf("%d\n", *x);
    printf("%d\n", *y);




    return 0;
}

