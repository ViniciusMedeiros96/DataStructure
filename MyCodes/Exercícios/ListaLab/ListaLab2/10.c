#include <stdio.h>

int main(void){

    int x, maior=0;

    while(x != -1){
        scanf("%d", &x);

        if(x > maior){
            maior = 0;
            maior += x;
        }
    }
    
    printf("O maior é: %d\n",maior);

    return 0;
}