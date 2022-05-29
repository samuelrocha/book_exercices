#include <stdio.h>

int main(){
    int qtdNumeros, maior = 0, qtdRepeticoes = 0, numero;
    scanf("%d", &qtdNumeros);
    for(int contador = 1; contador <= qtdNumeros; contador++){
        scanf("%d", &numero);
        if(numero > maior){
            maior = numero;
            qtdRepeticoes = 1;
        }else{
            if(numero == maior){
                qtdRepeticoes++;
            }
        }
    }
    printf("%d && %d\n", maior, qtdRepeticoes);
    return 0;
}