struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};
typedef struct elemento* Lista;

struct elemento{
    struct aluno dados;
    struct elemento *prox;
    
};
typedef struct elemento Elem;

void libera_lista(Lista* li);
