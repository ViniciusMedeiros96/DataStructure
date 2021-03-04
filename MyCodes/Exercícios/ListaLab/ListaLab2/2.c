#include <stdio.h>

int main(){

    double h,cont;
    int n;

    scanf("%d", &n);
    
    h = 1;
    
    cont = 1;
    
    while(cont <= n){
        h += 1/cont;
        cont++;
    }
    
    printf("%lf\n", h);
    
    return 0;
}