#include <stdio.h>

int main(void){

    int x, cont, soma=0;

    scanf("%d", &x);
    
    for(cont = 3; cont <= x; cont++){
        if(cont % 2 == 1){
            if(cont % 3 == 0){
                printf("%d\n",cont);
                soma += cont;
            }
        }
        printf("%d\n",soma);

    }
    printf("%d\n",soma);

    return 0;
}