#include <stdio.h>
#define tamanho_max 11


int main(void){
    int vetor_a[tamanho_max], vetor_b[tamanho_max], valores;

    for(int cont=0; cont <= 10; cont++){
        scanf("%d", &valores);
        vetor_b[tamanho_max] += valores;
    }
printf("%d\n", vetor_b);
    return 0;
}