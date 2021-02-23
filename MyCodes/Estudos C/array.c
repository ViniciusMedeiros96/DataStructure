#include <stdio.h>
#include <stdlib.h>
int main (){

    float notas[100];
    float vetor[100];
    notas[0] = 81;
    notas[1] = 55;
    notas[99] = 99;
    scanf("%f", &notas[2]);
    scanf("%f", &vetor[3]);
    notas[1] = notas[2] * vetor[3];
    printf("%f\n", notas[1]);

}