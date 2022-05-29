#include <stdio.h>

int main(){
    int valor, soma = 0;
    for(int x = 0; x < 10; x++){
        scanf("%d", &valor);
        soma += valor;
    }
    printf("%d\n",soma);
}