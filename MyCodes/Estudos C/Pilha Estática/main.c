#include <stdio.h>
#include "PilhaEstatica.h"
#include <string.h>

int main(void){
  Pilha *pi;
  
  /* Aluno 1 */
  
  Aluno AlunoX;
  AlunoX.matricula = 666215334;

  strcpy(AlunoX.nome, "Joao Vitor Negresco da Silva");

  AlunoX.n1 = 10.0;
  AlunoX.n2 = 9.73;

  /* Aluno 2 */

  Aluno AlunoY;
  AlunoY.matricula = 666215333;

  strcpy(AlunoY.nome, "Lucas Bivar Fonseca Defolt");

  AlunoY.n1 = 8;
  AlunoY.n2 = 9.73;

  /* Aluno 3 */

  Aluno AlunoZ;
  AlunoZ.matricula = 666215335;

  strcpy(AlunoZ.nome, "Flavia Default da Silva Negresco");

  AlunoZ.n1 = 7;
  AlunoZ.n2 = 5;

  /* Aluno 4 */

  Aluno AlunoB;
  AlunoB.matricula = 666215300;

  strcpy(AlunoB.nome, "Jorge Richard Patrícia Teixeira");

  AlunoB.n1 = 8;
  AlunoB.n2 = 9;


  pi = cria_pilha();

  if(pilha_cheia(pi))
    printf("Pilha cheia\n");

  if(pilha_vazia(pi))
    printf("Pilha vazia\n");

  insere_pilha(pi, AlunoX);
  insere_pilha(pi, AlunoY);

  printf("Tamanho da pilha: %d\n", tamanho_pilha(pi)); 

  printf("Aluno do topo: %d\n", busca_topo_pilha(pi, &AlunoX));
  libera_pilha(pi);

  return 0;
}