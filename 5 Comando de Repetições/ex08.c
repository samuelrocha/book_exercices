#include <stdio.h>

int main(){
    int valor, soma = 0;
    double media;
    for(int x = 0; x < 10; x++){
        scanf("%d", &valor);
        soma += valor;
    }
    media = soma / 10;
    printf("%f\n", media);
}