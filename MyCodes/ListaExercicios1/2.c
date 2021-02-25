#include <stdio.h>

int main (void){

    int a,b,c,menor,medio,maior;
    scanf ("%d%d%d",&a,&b,&c);

    if ((a < b) && (a < c) && (b < c)){
        menor = a;
        medio = b;
        maior = c;
    }
    if ((b < a) && (b < c) && (a > c)){
        menor = b;
        medio = c;
        maior = a;
    }
    if ((c < a) && (c < b) && (a < b)){
        menor = c;
        medio = a;
        maior = b;
    }
    
    printf("%d %d %d\n",maior, medio, menor);
    return 0;
}