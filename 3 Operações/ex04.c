#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor1, valor2, valor3, valor4, media;
    scanf("%f %f %f %f", &valor1, &valor2, &valor3, &valor4);
    media = (valor1 + valor2 + valor3 + valor4) / 4;
    printf("%f\n", media);
    return 0;
}