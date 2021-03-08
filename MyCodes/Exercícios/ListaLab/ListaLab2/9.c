#include <stdio.h>

int main(void){

    int x=1, cont, pares=0, media=0;
    double mediaf=0;

    

    while(x != 0){
        scanf("%d", &x);

        if((x % 2 == 0) && (x != 0)){
            pares += x;
            media++;
        }  
    }
    
    mediaf = pares/media;

    printf("%.2f\n", mediaf);

    return 0;
}