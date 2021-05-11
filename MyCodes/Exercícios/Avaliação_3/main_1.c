#include <stdio.h>
#include "FilaPilhaEst_1.h"
#include <string.h>

int main(void){
  Fila fi;

  /* Aluno 1 */
  
  Aluno AlunoX;
  AlunoX.matricula = 1111;

  strcpy(AlunoX.nome, "Arnaldo Cesar Coelho");

  AlunoX.n1 = 10.0;
  AlunoX.n2 = 9.73;

  /* Aluno 2 */

  Aluno AlunoY;
  AlunoY.matricula = 2222;

  strcpy(AlunoY.nome, "Balotelli Soares Muniz");

  AlunoY.n1 = 8;
  AlunoY.n2 = 9.73;

  /* Aluno 3 */

  Aluno AlunoZ;
  AlunoZ.matricula = 3333;

  strcpy(AlunoZ.nome, "Cristiano Ronaldo Silva");

  AlunoZ.n1 = 7;
  AlunoZ.n2 = 5;

  /* Aluno 4 */

  Aluno AlunoB;
  AlunoB.matricula = 4444;

  strcpy(AlunoB.nome, "Diego Maradona Juarez");

  AlunoB.n1 = 8;
  AlunoB.n2 = 9;

  /* Aluno 5 */

  Aluno AlunoV;
  AlunoV.matricula = 5555;

  strcpy(AlunoV.nome, "Eduardo Sanchez Souza");

  AlunoV.n1 = 5;
  AlunoV.n2 = 10;

  /* Criando a fila vazia */
  cria_fila(&fi);

 /* Enfileirando os elementos */
  enfileirar(&fi, &AlunoX);
  enfileirar(&fi, &AlunoY);
  enfileirar(&fi, &AlunoZ);
  enfileirar(&fi, &AlunoB);
  enfileirar(&fi, &AlunoV);

  /* Exibindo a fila */
  imprimir_fila(&fi);

  printf("INVERTENDO A ORDEM DOS ELEMENTOS:\n\n");

  /* Invertendo a fila com a função */
  inverter_fila(&fi);
  
  /* Exibindo a fila com os elementos invertidos */
  imprimir_fila(&fi);

  return 0;
}

