#include <stdio.h>

int main (void){

    int a,b,c,d,soma1,soma2;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    soma1 = c + d;
    soma2 = a + b;

    if (b > c){
        if (d > a){
            if (soma1 > soma2){
                if (c > 0 && d > 0){
                    if (a % 2 == 0){
                        printf("Valores aceitos\n");
                    }
                }
            }
        }
    }
    else{
        printf("Valores não aceitos\n");
    }
    return 0;
}