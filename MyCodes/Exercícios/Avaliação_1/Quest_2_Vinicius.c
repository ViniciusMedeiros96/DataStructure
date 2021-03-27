#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct ponto{
    float x,y;
};

typedef struct ponto Ponto;

struct circulo{
    char nome[10];
    Ponto centro;
    float raio;
};

typedef struct circulo Circulo;

Circulo* criaCirculo(char *nome, float x, float y, float raio){

    Circulo *p = (Circulo*)malloc(sizeof(Circulo));

    strcpy(p -> nome, nome);
    p->centro.x = x;
    p->centro.y = y;
    p->raio = raio;

    return p;
}

int contem(Circulo* circulo1, Circulo* circulo2){


    double X = pow(circulo2->centro.x - circulo1->centro.x, 2);
    double Y = pow(circulo1->centro.y - circulo1->centro.y, 2);

    double soma = X + Y;

    double d = sqrt(soma);

    if(d + circulo2->raio <= circulo1->raio)
        return 1;
    else
        return 0;
}

int main(void){

    Circulo *c1, *c2, *c3;

    c1 = criaCirculo("Circulo01", 3.0, 4.0, 2.0);
    c2 = criaCirculo("Circulo02", 3.0, 3.0, 1.0);
    c3 = criaCirculo("Circulo03", 1.0, 5.0, 1.0);
    printf("%d\n", contem(c1,c2));
    printf("%d\n", contem(c1,c3));
    free(c1);
    free(c2);
    free(c3);

    return 0;
}