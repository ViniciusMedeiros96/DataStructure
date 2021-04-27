#include "listadinalu.h"
#include <stdio.h>
#include <string.h>

int main(void){
  TAluno AlunoX;
  AlunoX.matricula = 666215334;

  strcpy(AlunoX.nome, "João Victor Negreiro da Silva");

  AlunoX.nota1 = 10.0;
  AlunoX.nota2 = 9.73;
  

  TAluno AlunoY;
  AlunoY.matricula = 666215333;

  strcpy(AlunoY.nome, "Lucas Bivar Fonseca Tavares");

  AlunoY.nota1 = 8;
  AlunoY.nota2 = 9.73;


  TAluno AlunoZ;
  AlunoZ.matricula = 666215335;
  
  strcpy(AlunoZ.nome, "Ribamar Ribeiro Riquelme Rivaldo");

  AlunoZ.nota1 = 7;
  AlunoZ.nota2 = 5;

  TAluno AlunoB;
  AlunoB.matricula = 666215300;
  
  strcpy(AlunoB.nome, "Jorge Richard Bivar");

  AlunoB.nota1 = 8;
  AlunoB.nota2 = 9;

  TListaAluno Lista;


  cria(&Lista); //Cria lista

  printf("1 = SUCESSO, 0 = ERRO\n");

  printf("Inserindo aluno no início da lista: %d\n", insereInicio(&Lista, AlunoX)); //Insere aluno no início da lista
  
  printf("Buscando o aluno da posição 1: %d\n", buscaAlunoPos(&Lista, 1, &AlunoX)); //Pesquisa aluno pela pela posição

  printf("Inserindo aluno pela posição 2: %d\n", inserePos(&Lista, 2, AlunoY)); //Insere aluno pela posição

  printf("Inserindo aluno pela posição 3: %d\n", inserePos(&Lista, 3, AlunoB));

  printf("Inserindo aluno no final da lista: %d\n", insereFinal(&Lista, AlunoZ)); //Inserir aluno no final da lista
  
  exibirAlunos(&Lista); //Imprime a lista

  printf("Tamanho da lista: %d\n", tamanho(&Lista)); //Tamanho da lista

  printf("Removendo o aluno da posição 1... %d\n", removePos(&Lista, 1, &AlunoX)); //Remove aluno pela posição

  exibirAlunos(&Lista); //Imprime a lista

  libera_lista(&Lista); //Libera lista




  return 0;
}

