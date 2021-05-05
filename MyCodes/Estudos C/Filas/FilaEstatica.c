#include <stdio.h>
#include "FilaEstatica.h"
#include <stdlib.h>

/* 
  Implementação de uma fila estática:

  Tipo de "Fila" onde o sucessor de um elemento ocupa a
  posição física seguinte do mesmo (uso de "array") 
  
  - O espaço de memória é alocada no momento da compilação
  - Exige a definição do número máximo de elementos da "Fila"
  - Acesso sequencial: elementos consecutivos na memória

  Em uma fila a inserção é sempre no seu final

  Também existe o caso onde a insrção é feita em uma fila que está vazia

  Cuidado: não se pode inserir numa fila cheia

*/

struct fila{
  int inicio, final, quantidade;
  Aluno dados[MAX];
};

Fila *cria_fila(){ /* Criando um ponteiro e alocando uma quantidade de memória pra ele */
  Fila *fi = (Fila*) malloc(sizeof(Fila)); /* Alocando espaço de memória para a struct */
  if(fi != NULL){
    fi -> inicio = 0; /* Colocando o valor de 0 para inicio */
    fi -> final = 0; /* Colocando o valor de 0 para final */
    fi -> quantidade = 0; /* Colocando o valor de 0 para quantidade */
  }
  return fi; /* Retornando o ponteiro alocado */
}

int tamanho_fila(Fila *fi){ /* Tamanho da fila */
  if(fi == NULL) return -1;
  return fi -> quantidade;
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

int insere_fila(Fila *fi, Aluno al){ /* Inserir elemento no final da fila */
  if(fi == NULL) return 0;
  if(fila_cheia(fi)) return 0;

  fi -> dados[fi -> final] = al; /* Pega o vetor dados na posição final e coloca um novo elemento */
  fi -> final = (fi -> final + 1) %MAX; /* %MAX para voltar ao inicio da fila quando chegar no final*/
  fi -> quantidade++; /* Soma +1 na quantidade para eu saber a quantidade de elementos na fila */
  return 1;
}

int remove_fila(Fila *fi){ /* Remove o primeiro elemento da fila */
  if((fi == NULL) || (fila_vazia(fi))) return 0;
  
  fi -> inicio = (fi -> inicio + 1) %MAX;
  fi -> quantidade--; /* Subtrai 1 para diminuir a quantidade já que estamos removendo elementos */
}

int busca_fila(Fila *fi, Aluno *al){ /* Busca o primeiro elemento da fila (Somente pode buscar pelo primeiro elemento)*/
  if((fi == NULL) || (fila_vazia(fi))) return 0;

  *al = fi -> dados[fi -> inicio]; /* Recebe os dados da fila que está no início */
    return 1;
}

















void libera_fila(Fila *fi){ /* Liberando a fila */
  free(fi);
}