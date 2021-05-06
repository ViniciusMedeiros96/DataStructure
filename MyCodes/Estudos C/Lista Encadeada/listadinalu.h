typedef struct aluno{
  int matricula;
  char nome[30];
  float nota1, nota2;
} TAluno;

typedef struct no{
  TAluno dado;
  struct no *prox;
}No;

typedef struct lista{
  No *inicio;
}TListaAluno;

void libera_lista(TListaAluno *la); // Função para liberar a lista

void cria(TListaAluno *la); // Cria a lista vazia

int tamanho(TListaAluno *la); // Retorna o tamanho da lista

int vazia(TListaAluno *la); // Retorna se a lista está vazia

int buscaPosMat(TListaAluno *la, int mat, int *pos); // Pesquisa posição pela matricula

int buscaAlunoPos(TListaAluno *la, int pos, TAluno *al); // Pesquisa aluno pela pela posição

int buscaAlunoMatNome(TListaAluno *la, int escolha, char name[30], int mat); // Pesquisa aluno pela matricula ou nome

int insereInicio(TListaAluno *la, struct aluno al); // Insere aluno no início da lista

int insereFinal(TListaAluno *la, struct aluno al); // Insere aluno no final da lista

int inserePos(TListaAluno *la, int pos, struct aluno al);// Insere o aluno dada a posição

int removeAlunoMat(TListaAluno *la, int mat); // Remove aluno da lista passando a matricula

int removePos(TListaAluno *la, int pos, TAluno *dado); // Remove aluno pela posição

void exibirAlunos(TListaAluno *la); // Exibe a Lista de alunos

