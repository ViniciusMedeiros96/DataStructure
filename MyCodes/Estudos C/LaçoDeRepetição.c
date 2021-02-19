#include <stdio.h>

int main(){

    int contador, contador2;

    for (contador = 1; contador <= 10; contador += 1){
        printf("teste\n");
    }
    printf("---------------");
    while (contador2 <= 5){
        printf("%i\n",contador2);
        ++contador2;

    }
 
    return(0);
}