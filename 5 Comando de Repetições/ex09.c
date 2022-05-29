#include <stdio.h>

int main(){
    int valor, maior, menor;

    for(int x = 0; x < 10; x++){
        scanf("%d", &valor);
        if(x == 0){
            maior = valor;
            menor = valor;
        }
        if(valor > maior){
            maior = valor;
        }
        if(valor < menor){
            menor = valor;
        }
    }
    printf("MAIOR: %d\n", maior);
    printf("MENOR: %d\n", menor);
}