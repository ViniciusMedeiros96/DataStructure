#include <stdio.h>

int main(void){

    int x, primo, cont;
    double divisor;

    scanf("%d", &x);

    cont = 1;
    divisor = 0;

    while(cont <= x){
        if(x % cont == 0){
            divisor += 1;
        }
        cont += 1;
    }
    
        if(divisor == 2){
            printf("Eh primo \n");
        }
        else{
            printf("Não eh primo \n");
        }

    return 0;
}