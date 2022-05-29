#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c, delta;
    double raiz1, raiz2;

    printf("ax2 + bx + c\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0){
        printf("nao e uma equacao de segundo grau\n");
    }else{
        delta = pow(b,2) - (4 * a * c);
        if (delta == 0){
            raiz1 = (-b) / (2 * a);
            printf("delta zero, unica raiz igual a %lf\n", raiz1);
        }else{
            if(delta > 0){
                raiz1 = ((-b) + sqrt(delta)) / (2*a);
                raiz2 = ((-b) - sqrt(delta)) / (2*a);
                printf("raiz 1: %lf\nraiz 2: %lf\n", raiz1, raiz2);
            }else{
                printf("delta negativo, nao existe raizes reais\n");
            }
        }
    }
    return 0;
}