#include <stdio.h>

int main (void){

    int *apontInt;
    float *apontFloat, salario;
    double *d = NULL;
    char *str = "Apontadores em C";

    int x = 10;
    int *px;
    px = &x;
    
    printf("%d\n", *px);
    printf("%p\n", px);

    


    return 0;
}

