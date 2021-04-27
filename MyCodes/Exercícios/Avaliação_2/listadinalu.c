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
    // se lista está vazia ou posição inválida
    if ( vazia( la ) || pos <= 0 ||
					pos > tamanho( la ) ) return 0;

    while ( ( aux != NULL ) && ( posicaoAtual < pos ) ){
    	aux = (aux)->prox;
        posicaoAtual++;
    }
    *al = (aux)->dado;
   	return 1;
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
    // inserção em uma lista que está vazia
    if( vazia(la)){
    	// se a lista está vazia, so podemos inserir na posição 1, certo?
       	if( pos != 1 ) return 0;
        // alocar o nó e testá-lo pra ver se tudo correu bem
        no->dado = al;
        no->prox = NULL;
        (la) -> inicio = no;
        return 1;
    }
    // inserção na primeira posição de uma lista não vazia
    if( pos == 1 ){
    	// alocar o nó e testá-lo pra ver se tudo correu bem
        no->dado = al;
        no->prox = (la) -> inicio;
        // faz cabeça da lista apontar para o "novo primeiro" da lista
        la -> inicio = no;
        return 1;
   	}
    // inserção após a primeira posição e em lista não-vazia
    No* aux = la->inicio;
    while(( contador < pos -1) && (aux != NULL)){
    	aux = aux->prox;
        contador++;
    }
    // se a posição foi maior que o tamanho da lista...
    if( aux == NULL ) return 0;
    // alocar o nó e testá-lo pra ver se tudo correu bem
  
   	no->dado = al;
    no->prox = aux->prox;
    aux->prox = no;
 
    return 1;
}

//int removeAlunoMat(TListaAluno *la, int mat){ // Remover aluno pela matrícula

//}

int removePos(TListaAluno *la, int pos, TAluno *dado){ //Remove aluno pela posição

  No* aux = NULL;
  No* anterior = NULL;
  int contador = 1;

  if(vazia(la)) return 0;

  // faz aux apontar para o primeiro elemento
  aux = la -> inicio ;

  // testar se posição - 1, pois quero que "anterior" pare "uma casa antes"
  // da posição real desejada para remoção e, ainda, aux parar exatamente
  // em cima do nó a ser removido
  while((contador <= pos - 1) && (aux != NULL)){
    anterior = aux;
      aux = aux->prox;
      contador++;
  }

  // se a posição foi maior que o esperado...
  if (aux == NULL) return 0;

  // ent�o a posição não é inválida (ou seja, posso obter o dado!)
  *dado = aux->dado;

  // se era o primeiro nó da lista...
  if( pos == 1 ) la -> inicio = aux->prox;
  else anterior -> prox = aux -> prox;

  // lembre-se de que, neste TAD, "remover" implica em desalocar memoria, tá?
  free( aux );
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