#define MAX 100

typedef struct aluno{
  int matricula;
  char nome[30];
  float n1, n2, n3;
}Aluno;

typedef struct fila Fila;

/* Funções */

Fila *cria_fila(); /* Cria a fila */

void libera_fila(Fila *fi); /* Liberando a fila */

int tamanho_fila(Fila *fi); /* Tamanho da fila */

int fila_cheia(Fila *fi); /* Verifica se a fila está cheia */

int fila_vazia(Fila *fi); /* Verifica se a fila está vazia */

int insere_fila(Fila *fi, Aluno al); /* Insere o elemento na fila */

int remove_fila(Fila *fi); /* Remove o primeiro elemento da fila */

int busca_fila(Fila *fi, Aluno *al); /* Consultar o primeiro elemento da fila */