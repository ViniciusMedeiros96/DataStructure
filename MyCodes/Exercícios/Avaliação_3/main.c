#include <stdio.h>
#include "FilaPilhaEst.h"
#include <string.h>

int main(void){
  Fila fi;

  /* Aluno 1 */
  
  Aluno AlunoX;
  AlunoX.matricula = 1212;

  strcpy(AlunoX.nome, "Junior Fabian Silva");

  AlunoX.n1 = 10.0;
  AlunoX.n2 = 9.73;

  /* Aluno 2 */

  Aluno AlunoY;
  AlunoY.matricula = 1213;

  strcpy(AlunoY.nome, "Vinicius Medeiros Arial");

  AlunoY.n1 = 8;
  AlunoY.n2 = 9.73;

  /* Aluno 3 */

  Aluno AlunoZ;
  AlunoZ.matricula = 1214;

  strcpy(AlunoZ.nome, "Neymar Silva Messi");

  AlunoZ.n1 = 7;
  AlunoZ.n2 = 5;

  /* Aluno 4 */

  Aluno AlunoB;
  AlunoB.matricula = 1215;

  strcpy(AlunoB.nome, "Pedro Silva Disney");

  AlunoB.n1 = 8;
  AlunoB.n2 = 9;

  /* Aluno 5 */

  Aluno AlunoV;
  AlunoV.matricula = 1216;

  strcpy(AlunoV.nome, "Heitor Brunini For");

  AlunoV.n1 = 5;
  AlunoV.n2 = 10;


  cria_fila(&fi);

  enfileirar(&fi, &AlunoX);
  enfileirar(&fi, &AlunoY);
  enfileirar(&fi, &AlunoZ);
  enfileirar(&fi, &AlunoB);
  enfileirar(&fi, &AlunoV);

  imprimir_fila(&fi);

  return 0;
}

