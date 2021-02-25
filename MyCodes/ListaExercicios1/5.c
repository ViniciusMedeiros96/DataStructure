#include <stdio.h>

int main (void){

    int x,conta;
    scanf("%d",&x);
    
    if (x < 1){
        conta = (4-(x*x));
        printf("%d\n", conta);
    }
    else if (x == 1){
        x = 2;
        printf("%d\n", x);
    }
    else if (x > 1){
        conta = (2+(x*x));
        printf("%d\n", conta);
    }
}