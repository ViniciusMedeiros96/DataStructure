#include "setup.h"


void produto(char tipos[][20], int precos[], char nome_produto[], Setup *meusetup){

    int selecionado;

    for(int cont=0; cont<3; cont++){
        printf("[%d]%s $%d\n", cont, tipos[cont], precos[cont]);
    }

    printf("Qual marca de %s você deseja? 0, 1 ou 2: \n", nome_produto);
    scanf("%d", &selecionado);
    
    strcpy(meusetup -> mouse_nome, tipos[selecionado]);
    meusetup -> mouse_price = precos[selecionado];


}

