#include <stdio.h>

int main (void){

    char vetor [] = "Cesar";
    char *pv = vetor;
    pv[2] = 'Z';
    *(pv+1) = 'R';
    printf("%c\n", *(pv+2));
    printf("%c\n", pv[1]);
    
    return 0;
}

 