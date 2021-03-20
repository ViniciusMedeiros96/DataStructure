#include <stdio.h>
#include <string.h>
#include "setup.h"
#define tamanho_max 20


int main(void){

    Setup meusetup;

    int soma;

    ////////////////// Mouse //////////////////

    char mouses[][20] = {"mouse hyperx", "mouse razer", "mouse logitech"};
    int mousesprecos[] = {300, 400, 250};

    produto(mouses, mousesprecos, "mouse", &meusetup);

    printf("Você selecionou esse mouse: %s que custa $%d reais", meusetup.mouse_nome, meusetup.mouse_price);
    printf("\n");

    ////////////////// Teclados //////////////////

    char teclados[][20] = {"teclado hyperx", "teclado razer", "teclado logitech"};
    int tecladoprecos[] = {400, 800, 600};

    produto(teclados, tecladoprecos, "teclado", &meusetup);

    printf("Você selecionou esse teclado: %s que custa $%d reais", meusetup.teclado_nome, meusetup.teclado_price);

    printf("\n");

    ////////////////// Headset //////////////////
    
    char headset[][20] = {"headset hyperx", "headset razer", "headset logitech"};
    int headsetprecos[] = {500, 700, 1000};
    
    produto(headset, headsetprecos, "headset", &meusetup);

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