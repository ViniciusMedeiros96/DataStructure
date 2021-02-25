#include <stdio.h>

int main (void){

    float salario, valor, renda, limite;

    scanf("%f",&salario);
    
    scanf("%f",&renda);
    limite = 0.30;

    valor = (salario*0.30) - renda;

   
    printf("%.2f\n",valor);
    
    
    return 0;
}
