#include <stdio.h>

int main(){

  typedef struct stnofila{
    int dado;
    struct stnofila *prox;
  }no;

  typedef struct tfila{
    no* inicio;
    no* final;
    int tamanho;
  }fila;

  no *aux;

  /*

  ↓   <-   4    ->   ↓
  10 -> 15 -> 20 -> 25

  */

  /* Criando a fila */
  fila filaz;
  /* Ponteiro inicio recebe o inicio da fila */
  no *fila_inicio = filaz.inicio;

  /* Percorrendo a fila */
  while(fila_inicio != NULL){
    /* Se o inicio da fila for 20 ele deve parar*/
    if(fila_inicio -> dado == 20)
      break;
    /* auxiliar recebe o atual */
    aux = fila_inicio;
    /* o elemento atual recebe o proximo elemento */
    fila_inicio = fila_inicio -> prox;
  }
  /* o elemento anterior ao atual recebe o elemento posterior ao atual */
  aux -> prox = fila_inicio -> prox;
  /* o no com valor 20 passa a apontar para o inicio */
  fila_inicio -> prox = filaz.inicio;
  /* agora o 20 será o inicio */
  filaz.inicio = fila_inicio;

  /*

  ↓   <-   4    ->   ↓
  20 -> 10 -> 15 -> 25

  */

  return 0;
}