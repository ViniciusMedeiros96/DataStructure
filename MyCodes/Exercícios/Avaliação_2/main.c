#include "listadinalu.h"
#include <stdio.h>
#include <string.h>

int main(void){
  TAluno AlunoX;
  AlunoX.matricula = 666;

  strcpy(AlunoX.nome, "João Victor Negreiro da Silva");

  AlunoX.nota1 = 10.0;
  AlunoX.nota2 = 9.73;
  
  TAluno AlunoY;
  AlunoY.matricula = 24;

  strcpy(AlunoY.nome, "Gesner Bezerra da Silva");

  AlunoY.nota1 = 8;
  AlunoY.nota2 = 9.73;

  TListaAluno Lista;

  cria(&Lista); //Cria lista

  printf("Inserindo check %d\n", insereInicio(&Lista, AlunoX)); //Insere aluno no início da lista
  
  printf("Posição: %d\n", buscaAlunoPos(&Lista, 1, &AlunoX)); //Pesquisa aluno pela pela posição

  inserePos(&Lista, 2, AlunoY);

  printf("Tamanho: %d\n", tamanho(&Lista)); //Tamanho da lista

  exibirAlunos(&Lista); //Imprime a lista







  return 0;
}

