#include <stdio.h>
#include <ctype.h> // toupper()

void limpar_buffer(void);

int main (void){

    char nome[41];
    char sexo;
    short int idade;
    float salario;
    /* caputar o nome */
    printf("Por favor, digite seu nome:\n");
    scanf("%s",nome);

    /* capturar o sexo*/
    printf("Agora, %s, digite seu sexo (M ou F)\n", nome);
    scanf("%c", &sexo);


    /* capturar idade */
    printf("Digite sua idade:\n");
    scanf("%hd", &idade);

    /* capturar o salário */
    printf("Finalmente, entre com o salário:\n"
           "R$_________\b\b\b\b\b\b\b"                               
    );
    scanf("%f", &salario);
    limpar_buffer();
    
    /* exibir os dados */
    printf(
        "Os dados digitados foram:\n"
        "Nome......:%s\n"
        "Sexo......:%c\n"
        "Idade.....:%hd\n"
        "Salário R$:%f\n",
        nome, sexo, idade, salario
    );

    return 0;
}

void limpar_buffer(void)
{
    int c;
    while( (c = getchar() ) != "\n" && c != EOF);

}