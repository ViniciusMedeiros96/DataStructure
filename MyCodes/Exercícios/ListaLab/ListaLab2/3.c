#include <stdio.h>

int main(void){

    double h, calc, cont, contx;
    int x;

    scanf("%d", &x);

    cont = 1;
    contx = 1;
    
    while(contx <= x){
        calc = cont/contx;
        h += calc;
        cont += 2;
        contx++;

    }
    printf("%lf\n", h);



    return 0;
}