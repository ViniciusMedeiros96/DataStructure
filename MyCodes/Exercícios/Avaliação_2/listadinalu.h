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

void libera_lista(TListaAluno *la); // Função para liberar a lista OK

void cria(TListaAluno *la); // Cria a lista vazia CHECK

int tamanho(TListaAluno *la); // Retorna o tamanho da lista CHECK

int vazia(TListaAluno *la); // Retorna se a lista está vazia CHECK

int buscaPosMat(TListaAluno *la, int mat, int *pos); // Pesquisa posição pela matricula

int buscaAlunoPos(TListaAluno *la, int pos, TAluno *al); // Pesquisa aluno pela pela posição CHECK

int insereInicio(TListaAluno *la, struct aluno al); // Insere aluno no início da lista CHECK

int insereFinal(TListaAluno *la, struct aluno al); // Insere aluno no final da lista NAO OK

int inserePos(TListaAluno *la, int pos, struct aluno al);// Insere o aluno dada a posição NAO OK

int removeAlunoMat(TListaAluno *la, int mat); // Remove aluno da lista passando a matricula

void exibirAlunos(TListaAluno *la); // Exibe a Lista de alunos CHECK