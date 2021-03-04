#include <stdio.h>
#include <math.h>

int main (void){

    int x1,x2,b,a,c;
    double raiz_delta,delta;

    scanf("%d%d%d",&a,&b,&c);
    delta = ((b*b) - 4 * a * c);
    
    raiz_delta =(pow(delta,0.5));


    if (delta<0){
        printf("Raízes imaginárias\n");
    }

    if (delta==0){
        x1 = x2 = (-b/ 2*a);
        printf("%d\n",x1);
    }
    
    if (delta>0){
        x1 = -b + raiz_delta;
        x2 = -b-raiz_delta/2*a;
        printf("%d%d\n",x1,x2);
    }


    return 0;
}