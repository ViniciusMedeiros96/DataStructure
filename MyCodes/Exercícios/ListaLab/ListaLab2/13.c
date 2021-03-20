#include <stdio.h>

int main(void){

    int cont=1;
    double x, soma=0, dinheiro, troco;


    while(x != 0){
        scanf("%lf", &x);

        printf("Produto $%d: %.2lf\n", cont, x);
        cont++;

        soma += x;
    }
    
    scanf("%lf", &dinheiro);
    printf("Dinheiro: $%.2lf\n", dinheiro);
    
    printf("Total: $%.2lf\n", soma);

    troco = dinheiro - soma;

    printf("Troco: $%.2lf\n", troco);


    return 0;
}