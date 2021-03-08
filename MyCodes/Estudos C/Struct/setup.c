#include <stdio.h>
#include <string.h>

#define tamanho_max 20


struct setup{

    int mouse_price;
    char mouse_nome[tamanho_max];

    int teclado_price;
    char teclado_nome[tamanho_max];

    int headset_price;
    char headset_nome[tamanho_max];

};

typedef struct setup Setup;


int main(void){

    Setup meusetup;

    int mouseselecionado, tecladoselecionado, headsetselecioado, soma;

    ////////////////// Mouse //////////////////

    char mouses[][20] = {"mouse hyperx", "mouse razer", "mouse logitech"};
    int mousesprecos[] = {300, 400, 250};

    for(int cont=0; cont<3; cont++){
        printf("[%d]%s $%d\n", cont, mouses[cont], mousesprecos[cont]);
    }
    printf("Qual marca de mouse você deseja? 0, 1 ou 2: \n");
    scanf("%d", &mouseselecionado);
    
    strcpy(meusetup.mouse_nome, mouses[mouseselecionado]);
    meusetup.mouse_price = mousesprecos[mouseselecionado];

    
    printf("Você selecionou esse mouse: %s que custa $%d reais", meusetup.mouse_nome, meusetup.mouse_price);
    printf("\n");

    ////////////////// Teclados //////////////////

    char teclados[][20] = {"teclado hyperx", "teclado razer", "teclado logitech"};
    int tecladoprecos[] = {400, 800, 600};

    for(int cont = 0; cont<3; cont++){
        printf("[%d]%s $%d\n", cont, teclados[cont], tecladoprecos[cont]);
    }
    printf("Qual marca de mouse você deseja? 0, 1 ou 2: \n");
    scanf("%d", &tecladoselecionado);

    strcpy(meusetup.teclado_nome, teclados[tecladoselecionado]);
    meusetup.teclado_price = tecladoprecos[tecladoselecionado];

    printf("Você selecionou esse teclado: %s que custa $%d reais", meusetup.teclado_nome, meusetup.teclado_price);

    printf("\n");

    ////////////////// Headset //////////////////
    
    char headset[][20] = {"headset hyperx", "headset razer", "headset logitech"};
    int headsetprecos[] = {500, 700, 1000};
    
    for(int cont = 0; cont<3; cont++){
        printf("[%d]%s $%d\n", cont, headset[cont], headsetprecos[cont]);
    }
    printf("Qual marca de headset você deseja? 0, 1 ou 2?: \n");
    scanf("%d", &headsetselecioado);

    strcpy(meusetup.headset_nome, headset[headsetselecioado]);
    meusetup.headset_price = headsetprecos[headsetselecioado];

    printf("Você selecionou o headset %s que custa $ %d reais", meusetup.teclado_nome, meusetup.teclado_price);

    printf("\n");

    soma = (meusetup.headset_price + meusetup.mouse_price + meusetup.teclado_price);

    printf("%s, %s, %s\n", meusetup.headset_nome, meusetup.mouse_nome, meusetup.teclado_nome);
    printf("Valor total de compra: $%d\n", soma);

    if(soma > 1000){
        printf("https://www.hyperxgaming.com/br \n");
    }
    
    return 0;
}