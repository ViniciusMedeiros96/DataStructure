#include <stdio.h>
#include <stdlib.h>
#include "FilaPilhaEst_1.h"

/* Implementação das funções */

int cria_fila(Fila *fi){ /* Criando um ponteiro e alocando uma quantidade de memória pra ele */
  if(fi != NULL){
    fi -> inicio = 0; /* Colocando o valor de 0 para inicio */
    fi -> final = 0; /* Colocando o valor de 0 para final */
    fi -> quantidade = 0; /* Colocando o valor de 0 para quantidade */
  }
  return 1; /* Retornando o ponteiro alocado */
}

int fila_cheia(Fila *fi){ /* Verificar se a fila está cheia*/
  if(fi == NULL) return -1;
  if(fi -> quantidade == MAX) /* Compara a quantidade, se está cheia */
    return 1;
  else
    return 0;
}

int fila_vazia(Fila *fi){
  if(fi == NULL) return -1;
  if(fi -> quantidade == 0)
    return 1;
  else
    return 0;
}

int busca_fila(Fila *fi, Aluno *al){ /* Busca o primeiro elemento da fila (Somente pode buscar pelo primeiro elemento)*/
  if((fi == NULL) || (fila_vazia(fi))) return 0;

  *al = fi -> elementos[fi -> inicio]; /* Recebe os dados da fila que está no início */
    return 1;
}

int enfileirar(Fila *fi, Aluno *al){
	if (fila_cheia( fi ) ) return 0;
	
	(fi -> quantidade)++;
  fi -> elementos[fi-> final] = *al;
	fi -> final = (fi->final + 1) % MAX;
	return 1;
}

int desenfileirar (Fila *fi, Aluno *al){
  *al = fi -> elementos[fi->inicio];

	(fi->quantidade)--;
	fi->inicio = (fi->inicio + 1) % MAX;
    return 1;
}

void imprimir_fila(Fila *fi){
	for(int i = 0, aux = fi->inicio; i < fi->quantidade; i++, aux =(aux+1)%MAX){
		printf("Nome: %s\n", fi->elementos[aux].nome);
    printf("Matricula: %d\n", fi->elementos[aux].matricula);
    printf("Nota 1: %.2lf\n", fi->elementos[aux].n1);
    printf("Nota 2: %.2lf\n\n", fi->elementos[aux].n2);
  }
}

void libera_fila(Fila *fi){ /* Liberando a fila */
  free(fi->elementos);
  free(fi);
}

int cria_pilha(Pilha *pi){ /* Criando um ponteiro e alocando uma quantidade de memória pra ele */
  if(pi != NULL){
    pi -> quantidade = 0; /* Colocando o valor de 0 para quantidade */
    pi -> topo = 0;
  }
  return 1; /* Retornando o ponteiro alocado */
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

int busca_topo_pilha(Pilha *pi, Aluno *al){
  if((pi == NULL) || (pi -> quantidade == 0))
    return 0;
  *al = pi -> elementos[pi -> quantidade - 1]; 
  /* No conteúdo da variável *al irá copiar o vetor dados na 
  posição quantidade -1 (último elemento inserido) */
  return 1;
}

int empilhar(Pilha *pi, Aluno *al){
  if (pilha_cheia(pi)) return 0;
	pi -> elementos[pi -> topo] = *al;
	pi -> topo++;
  pi -> quantidade++;
    return 1;
}

int desempilhar(Pilha *pi, Aluno *al){
  if (pilha_vazia(pi)) return 0;

	*al = pi -> elementos[--pi -> topo];
  pi -> quantidade--;
    return 1;
}

void libera_pilha(Pilha *pi){
  free(pi);
}

void imprimir_pilha(Pilha *pi){
  for ( int i = 0; i < pi->topo ; i++){
      printf("Nome: %s\n", pi->elementos[i].nome);
      printf("Matricula: %d\n", pi->elementos[i].matricula);
      printf("Nota 1: %.2lf\n", pi->elementos[i].n1);
      printf("Nota 2: %.2lf\n\n", pi->elementos[i].n2);
	}
}

int inverter_fila(Fila *fi){
  
  Aluno aluno;
  Pilha *pi=(Pilha*) malloc(sizeof(Pilha));

  cria_pilha(pi);
  while(!fila_vazia(fi)){
    desenfileirar(fi, &aluno);
    empilhar(pi, &aluno);
  }
  while(!pilha_vazia(pi)){
    desempilhar(pi, &aluno);
    enfileirar(fi, &aluno);
  }
  return 1;
}
