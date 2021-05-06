#define MAX 100

typedef struct aluno{
  int matricula;
  char nome[30];
  float n1, n2, n3;
} Aluno;

typedef struct pilha Pilha;

/* FUNÇÕES */

Pilha* cria_pilha(); /* Cria a pilha */

int tamanho_pilha(Pilha *pi); /* Tamanho da pilha */

int pilha_cheia(Pilha *pi); /* Verificar se a pilha está cheia */

int pilha_vazia(Pilha *pi); /* Verifica se a pilha está vazia */











void libera_pilha(Pilha *pi); /* Libera a pilha */