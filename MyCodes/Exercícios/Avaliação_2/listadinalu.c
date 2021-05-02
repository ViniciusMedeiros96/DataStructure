#include "listadinalu.h"
#include <stdio.h>
#include <stdlib.h>

void cria(TListaAluno *la){ la->inicio = NULL; } //Criando lista vazia


int vazia(TListaAluno *la){ //Verificar se a lista está vazia
  return la->inicio == NULL; }

int tamanho( TListaAluno *la ){ //Verificar o tamanho da lista
  No* aux = la->inicio;
	int tamanho = 0;
  while( aux != NULL ) {
    aux = aux-> prox;
    tamanho++;
  }
  return tamanho;
}

int buscaAlunoPos(TListaAluno *la, int pos, TAluno *al){ // Pesquisa aluno pela pela posição
	int posicaoAtual = 1;
    No* aux = la->inicio;
    if ( vazia( la ) || pos <= 0 ||
					pos > tamanho( la ) ) return 0;

    while(( aux != NULL) && ( posicaoAtual < pos)){
    	aux = (aux)->prox;
        posicaoAtual++;
    }
    *al = (aux)->dado;
   	return 1;
}

int buscaPosMat(TListaAluno *la, int mat, int *pos){
  if(vazia(la)) return 0;
  No* aux = NULL;
  aux = la -> inicio;
  int cont = 0;

  while((aux->dado.matricula != mat) && (aux != NULL)){
    aux = aux -> prox;
    cont++;
    printf("%d\n", cont);
  }
  if(aux == NULL){
    return 0;
  }
  else{
    printf("ok");
    *pos = cont;
    return 1;
  }
}

int insereInicio(TListaAluno *la, struct aluno al){ //Insere aluno no início da lista
  if(la == NULL) return 0;
  No* no = (No*) malloc(sizeof(No));
  if(no == NULL) return 0;
  no -> dado = al;
  no -> prox = la->inicio;
  la->inicio = no;
  return 1;
}

int insereFinal(TListaAluno *la, TAluno al){ //Insere o aluno no final da lista
  if(la == NULL) return 0;
  No *no = (No*) malloc(sizeof(No));
  if(no == NULL) return 0;
  no -> dado = al;
  no -> prox = NULL;
  if((la)->inicio == NULL){
    (la)->inicio = no;
  }else{
    No *aux = la -> inicio;
    while(aux -> prox != NULL){
      aux = aux -> prox;
    }
    aux -> prox = no;
  }
  return 1;
}

int inserePos(TListaAluno *la, int pos, struct aluno al){ // Função para inserir pela posição
  No *no = (No*) malloc(sizeof(No));
  
  int contador = 1;
  
  if( vazia(la)){
      if( pos != 1 ) return 0;
      no->dado = al;
      no->prox = NULL;
      (la) -> inicio = no;
      return 1;
  }

  if( pos == 1 ){
      no->dado = al;
      no->prox = (la) -> inicio;
      la -> inicio = no;
      return 1;
  }
  
  No* aux = la->inicio;
  while(( contador < pos -1) && (aux != NULL)){
    aux = aux->prox;
      contador++;
  }

  if( aux == NULL ) return 0;

  no->dado = al;
  no->prox = aux->prox;
  aux->prox = no;

  return 1;
}

 int removeAlunoMat(TListaAluno *la, int mat){ // Remover aluno pela matrícula
   No* aux = NULL;
   No* anterior = NULL;

   if(vazia(la)) return 0;
   aux = la -> inicio ;
   while((aux->dado.matricula != mat) && (aux != NULL)){
    anterior = aux;
    aux = aux->prox;
   }
   
   if(aux == NULL) return 0;
   if(aux == la -> inicio){
     la -> inicio = aux -> prox;
   }
   else{
     anterior -> prox = aux -> prox;
   }
   free(aux);
   return 1;
 }

int removePos(TListaAluno *la, int pos, TAluno *dado){ //Remove aluno pela posição

  No* aux = NULL;
  No* anterior = NULL;
  int contador = 1;

  if(vazia(la)) return 0;

  aux = la -> inicio ;

  while((contador <= pos - 1) && (aux != NULL)){
    anterior = aux;
      aux = aux->prox;
      contador++;
  }

  if (aux == NULL) return 0;

  *dado = aux->dado;

  if( pos == 1 ) la -> inicio = aux->prox;
  else anterior -> prox = aux -> prox;

  free(aux);
  return 1;
}

void exibirAlunos(TListaAluno *la){ // Exibe a Lista de alunos
	printf( "\nAlunos:\n\n");
  No* atual = la->inicio;
	while(atual){
    
	  printf("Nome: %s\nMatrícula: %d\nNota1: %.2f\nNota2: %.2f\n\n", atual->dado.nome, atual->dado.matricula, atual->dado.nota1, atual->dado.nota2 );
    atual = atual->prox;
  }
}

void libera_lista(TListaAluno *la){ //Função que libera a lista
  if(la != NULL){
    No* no;
    while ((la)->inicio != NULL){
      no = la->inicio;
      la->inicio = ((la)->inicio) -> prox;
      free(no);
    }
    free(la->inicio);
  }
}