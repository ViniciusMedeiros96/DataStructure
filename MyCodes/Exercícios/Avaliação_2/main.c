#include "listadinalu.h"
#include <stdio.h>
#include <string.h>

int main(void){
  TAluno AlunoX;
  AlunoX.matricula = 666215334;

  strcpy(AlunoX.nome, "Joao Vitor Negresco da Silva");

  AlunoX.nota1 = 10.0;
  AlunoX.nota2 = 9.73;
  

  TAluno AlunoY;
  AlunoY.matricula = 666215333;

  strcpy(AlunoY.nome, "Lucas Bivar Fonseca Defolt");

  AlunoY.nota1 = 8;
  AlunoY.nota2 = 9.73;


  TAluno AlunoZ;
  AlunoZ.matricula = 666215335;
  
  strcpy(AlunoZ.nome, "Flavia Default da Silva Negresco");

  AlunoZ.nota1 = 7;
  AlunoZ.nota2 = 5;

  TAluno AlunoB;
  AlunoB.matricula = 666215300;
  
  strcpy(AlunoB.nome, "Jorge Richard Patrícia Teixeira");

  AlunoB.nota1 = 8;
  AlunoB.nota2 = 9;

  TListaAluno Lista;

  int pos;

  cria(&Lista); //Cria lista

  printf("1 = SUCESSO, 0 = ERRO\n");

  printf("Inserindo aluno no início da lista: %d\n", insereInicio(&Lista, AlunoX)); //Insere aluno no início da lista
  
  printf("Buscando o aluno da posição 1: %d\n", buscaAlunoPos(&Lista, 1, &AlunoX)); //Pesquisa aluno pela pela posição

  printf("Inserindo aluno na posição 2: %d\n", inserePos(&Lista, 2, AlunoY)); //Insere aluno pela posição

  printf("Inserindo aluno na posição 3: %d\n", inserePos(&Lista, 3, AlunoB));

  printf("Inserindo aluno no final da lista: %d\n", insereFinal(&Lista, AlunoZ)); //Inserir aluno no final da lista
  
  printf("\nExibindo todos os alunos:\n");
  printf("\n==============================================================\n");
  exibirAlunos(&Lista); //Imprime a lista
  printf("==============================================================\n");

  printf("\nTamanho da lista: %d\n", tamanho(&Lista)); //Tamanho da lista

  if(buscaPosMat(&Lista, 666215333, &pos)){ //Buscando aluno pela matrícula
    printf("Posição do aluno 666215333 na lista: %d\n", pos);
  }
  else{
    printf("Aluno não encontrado.\n");
  }

  if(buscaPosMat(&Lista, 66621533, &pos)){ //Buscando aluno pela matrícula
    printf("Posição do aluno com a matrícula 66215333 na lista: %d\n", pos);
  }
  else{
    printf("ERRO, POIS O ALUNO DA MATRÍCULA ESPECIFICADA NÃO EXISTE\n");
  }

  printf("Removendo o aluno da posição 1... %d\n", removePos(&Lista, 1, &AlunoX)); //Remove aluno pela posição

  printf("Removendo aluno pela matrícula %d\n", removeAlunoMat(&Lista, 666215300)); //Remove aluno pela matrícula

  printf("\nExibindo a lista de alunos após algumas modificações:\n");

  printf("\n==============================================================\n");
  exibirAlunos(&Lista); //Imprime a lista
  printf("==============================================================\n");

  printf("\nExibindo os dados do aluno Lucas Bivar Fonseca Defolt:\n");

 if(!buscaAlunoMatNome(&Lista, 0, "Lucas Bivar Fonseca Defolt", 1)){
   printf("Aluno especificado não encontrado!, digite um nome válido.\n");
  }
 printf("\nExibindo os dados do aluno da matrícula 666215335:\n");
 if(!buscaAlunoMatNome(&Lista, 1, "", 666215335)){
   printf("Aluno especificado não encontrado!, digite uma matricula válida.\n");
  }

  libera_lista(&Lista); //Libera lista

  return 0;
}

