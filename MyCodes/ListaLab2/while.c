#include <stdio.h>

int main(void){

    int numero, divisor, resto;
    printf("Digite o número: ");
    scanf("%d", &numero);

    divisor = 1;
    while (divisor <= numero){
        resto = numero % divisor;
        if (resto == 0){
            printf("Divisor: %d\n", divisor);
            printf("Resto: %d\n", resto);
        }
        divisor++;

    }
    
    return 0;
}    
    