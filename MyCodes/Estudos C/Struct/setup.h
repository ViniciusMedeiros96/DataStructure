#define tamanho_max 50

typedef struct{

    int mouse_price;
    char mouse_nome[tamanho_max];

    int teclado_price;
    char teclado_nome[tamanho_max];

    int headset_price;
    char headset_nome[tamanho_max];

}Setup;

void produto(char tipos[][20], int precos[], char nome_produto[], Setup *meusetup);
