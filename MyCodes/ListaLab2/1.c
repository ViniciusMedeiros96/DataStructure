#include <stdio.h>

int main (){

    int valores, cont, pertence;

    cont = 1;
    pertence = 0;
    while (cont <= 10){
        scanf("%d", &valores);
        if ((valores >= 10) && (valores <= 20)){
            pertence += 1;
        }
        cont++;
    }
    printf("%d\n", pertence);

    return 0;
}