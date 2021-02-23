#include <stdio.h>

int main (){
    short int x;
    scanf("%i\n",&x);

    if ((x%2 == 0) || (x<0)){

        printf("O valor é par ou negativo\n");
        printf("%i\n");
    }


    return 0;
}