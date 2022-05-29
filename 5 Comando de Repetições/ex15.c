#include <stdio.h>

int main(){
    int valor, maior, menor;

    scanf("%d", &valor);
    if(valor >= 0){
        maior = valor;
        menor = valor;
        while(valor >= 0){ 
            if(valor > maior){
                maior = valor;
            }
            if(valor < menor){
                menor = valor;
            }
            scanf("%d", &valor);
        }
        printf("MAIOR: %d\n", maior);
        printf("MENOR: %d\n", menor);
    }
    return 0;
}