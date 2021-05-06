#include <stdio.h>
#include <stdlib.h>
#include "PilhaEstatica.h"

/* 
  Implementação de uma pilha estática:

  Tipo de "Pilha" onde o sucessor de um elemento ocupa a 
  posição física seguinte do mesmo (uso de "array")
*/

struct pilha{
  int quantidade;
  struct aluno dados[MAX];
};

Pilha *cria_pilha(){ /* Criando um ponteiro e alocando uma quantidade de memória pra ele */
  Pilha *pi;
  pi = (Pilha*) malloc(sizeof(Pilha)); /* Alocando espaço de memória para a struct */
  if(pi != NULL)
    pi -> quantidade = 0; /* Colocando o valor de 0 para quantidade */
  return pi; /* Retornando o ponteiro alocado */
}

int tamanho_pilha(Pilha *pi){
  if(pi == NULL) return -1;
  else
    return pi -> quantidade; /* retorna o tamanho da lista */
}

int pilha_cheia(Pilha *pi){
  if(pi == NULL) return -1;
  if(pi -> quantidade == MAX)
    return 1;
  else
    return 0;
}






















void libera_pilha(Pilha *pi){
  free(pi);
}