#include <stdio.h>

int main(){
    int valor, soma, x;
    double media;
    soma = x = 0;
    while(x < 10){
        //getchar();
        scanf("%d", &valor);
        if(valor > 0){
            soma += valor;
            x++;
        }
    }
    media = soma / 10.0;
    printf("%f\n", media);
}