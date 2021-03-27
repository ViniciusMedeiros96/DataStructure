#include <stdio.h>
#include <math.h>

double desviopadrao(double *v, int n);

int main(){

    double valores[5];

    for(int j = 0; j < 5; j++)
        scanf("%lf", &valores[j]);
    
    double desviop = desviopadrao(valores , 5);

    printf("Desvio padrão: %.2lf\n", desviop);

    return 0;
}

double desviopadrao(double *v, int n){
    
    double soma = 0, x = 0, s = 0;
    
    for(int i = 0; i < n; i++){
        //calculando a soma dos valores
        soma += v[i];

    }

    //calculando a media
    double media = soma / (double) n;
    

    for(int i = 0; i < n; i++){
        //subtraindo os valores pela media
        x = v[i] - media;
        
        //elevando os resultados ao quadrado
        s += x*x;

    }

    //pegando o resultado e subtraindo pelo número de valores
    double desvio = s / (double) n; 

    //tirando a raiz quadrada do resultado e obetendo o tão sonhado desvio padrão
    double desvio_padrao = sqrt(desvio); 

    //retornando o resultado final
    return desvio_padrao;
}