#include <stdio.h>

int main(void){

    double h, calc;
    int x, cont, contx;

    scanf("%d", &x);

    cont = 1;
    contx = 1;
    
    while(contx <= x){
        calc = cont/contx;
        h += calc;
        cont += 2;
        contx += 1;
        
        printf("%lf\n", h);

    }
    printf("%lf\n", h);



    return 0;
}