#include <stdio.h>

int main (){

    int peso, idade, risco;
    scanf("%d%d", &idade, &peso);
    
    if(idade < 20){
        if(peso < 60){
            risco = 9;
        }
        if((peso >= 60) && (peso <= 90)){
            risco = 8;
        }
        if(peso > 90){
            risco = 7;
        }
            printf("%d\n", risco);
    }

    if((idade >= 20) && (idade < 50)){
        if(peso < 60){
            risco = 6;
        }
        if((peso > 60) && (peso <= 90)){
            risco = 5;
        }
        if(peso > 90){
            risco = 4;
        }
            printf("%d\n", risco);
    }
    
    if(idade >= 50){
        if(peso < 60){
            risco = 3;
        }
        if((peso > 60) && (peso <= 90)){
            risco = 2;
        }
        if(peso > 90){
            risco = 1;
        }
            printf("%d\n", risco);
    }


    return 0;
}