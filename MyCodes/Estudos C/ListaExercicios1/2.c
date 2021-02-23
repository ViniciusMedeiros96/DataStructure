#include <stdio.h>

int main (void){

    int a,b,c,menor,mejo,major;
    scanf ("%d%d%d",&a,&b,&c);

    if ((a < b) && (a < c)){
        menor = a;
    }
    if ((b < a) && (b < c)){
        menor = b;
    }
    return 0;
}