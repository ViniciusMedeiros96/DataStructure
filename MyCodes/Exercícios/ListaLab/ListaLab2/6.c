#include <stdio.h>

int main(void){

    int valor, c, v;

    scanf("%d", &valor);
    
    for(c = 1; c <= valor; c++){
        for(v = 1; v <= valor; v++){
            printf("%d ",v);
            
        }
        printf("\n");

    }

    printf("\n");

    return 0;
}