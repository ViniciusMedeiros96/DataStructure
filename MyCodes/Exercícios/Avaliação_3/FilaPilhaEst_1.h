#define MAX 5

typedef struct aluno{
  int matricula;
  char nome[30];
  float n1, n2;
}Aluno;

typedef struct fila{
  int inicio, final, quantidade;
  Aluno elementos[MAX];
}Fila;

typedef struct pilha{
  int quantidade, topo;
  struct aluno dados[MAX], elementos[MAX];
}Pilha;

/* Funções para fila */

int cria_fila(Fila *fi); /* Cria a fila */

int fila_cheia(Fila *fi); /* Verifica se a fila está cheia */

int fila_vazia(Fila *fi); /* Verifica se a fila está vazia */

int busca_fila(Fila *fi, Aluno *al); /* Consultar o primeiro elemento da fila */

int enfileirar(Fila *fi, Aluno *al); /* Inserir elemento na fila CESAR */

int desenfileirar(Fila *fi, Aluno *al); /* Remover elemento na fila CESAR */

void imprimir_fila(Fila *fi); /* Exibir conteúdo da fila CESAR */

void libera_fila(Fila *fi); /* Liberando a fila */

/* Funções para pilha */

int cria_pilha(Pilha *pi); /* Cria a pilha */

int pilha_cheia(Pilha *pi); /* Verificar se a pilha está cheia */

int pilha_vazia(Pilha *pi); /* Verifica se a pilha está vazia */

int busca_topo_pilha(Pilha *pi, Aluno *al); /* Consulta o elemento do topo */

int empilhar(Pilha *pi, Aluno *al); /* Inserir elemento no topo da pilha */

int desempilhar(Pilha *pi, Aluno *al); /* Remover elemento no topo da pilha */

void imprimir_pilha(Pilha *pi); /* Exibir elementos */

void libera_pilha(Pilha *pi); /* Libera a pilha */

int inverter_fila(Fila *fi); /* Função para inverter a fila */
