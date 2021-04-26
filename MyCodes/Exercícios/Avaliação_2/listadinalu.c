#include "listadinalu.h"
#include <stdio.h>
#include <stdlib.h>

void cria( TListaAluno *la ){ la->inicio = NULL; } //Criando lista vazia


int vazia( TListaAluno *la ){ //Verificar se a lista está vazia
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

int inserePos(TListaAluno *la, int pos, struct aluno al){
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
    while( ( contador < pos -1 ) && ( aux != NULL ) ) {
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









void exibirAlunos(TListaAluno *la){ // Exibe a Lista de alunos
	printf( "\nAlunos: ");
  No* atual = la->inicio;
	while(atual){
    
	  printf("%s\n ", atual->dado.nome );
    atual = atual->prox;
  }

}

// void libera_lista(TListaAluno *li){ //Função que libera a lista
//   if(li != NULL){
//     No* no;
//     while ((*li) != NULL){
//       no = *li;
//       *li = (*li) -> prox;
//       free(no);
//     }
//     free(li);
//   }
// }