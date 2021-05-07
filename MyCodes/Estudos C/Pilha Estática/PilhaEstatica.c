#include <stdio.h>
#include <stdlib.h>
#include "PilhaEstatica.h"

/* 
  Implementação de uma pilha estática:

  Tipo de "Pilha" onde o sucessor de um elemento ocupa a 
  posição física seguinte do mesmo (uso de "array")

  Em uma pilha a inserção e remoção é sempre no seu início

  Cuidado: não se pode inserir numa pilha cheia

  Em uma pilha a consulta se dá apenas ao elemento
  que está no seu início
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

int pilha_vazia(Pilha *pi){
  if(pi == NULL) return -1;
  return (pi -> quantidade == 0);
}

int insere_pilha(Pilha *pi, Aluno al){ /* Inserir no topo da pilha (sempre) */
  if(pi == NULL) return 0;
  if(pilha_cheia(pi)) return 0;
  
  pi -> dados[pi-> quantidade] = al; /* Coloca o dado a ser inserido na posição quantidade */
  pi -> quantidade++; /* Incrementa a quantidade de elementos para o campo quantidade */
  return 1;
}

int remove_pilha(Pilha *pi){ /* Remove o elemento do topo da pilha */
  if((pi == NULL) || (pi -> quantidade == 0))
    return 0;
  pi -> quantidade--; /* Diminui um elemento da pilha */
  return 1;
}

int busca_topo_pilha(Pilha *pi, Aluno *al){
  if((pi == NULL) || (pi -> quantidade == 0))
    return 0;
  *al = pi -> dados[pi -> quantidade - 1]; 
  /* No conteúdo da variável *al irá copiar o vetor dados na 
  posição quantidade -1 (último elemento inserido) */
  return 1;
}

void libera_pilha(Pilha *pi){
  free(pi);
}