#include <stdio.h>

int main(){ 
    // VARIAVEIS DE CONTROLE
    int anterior = 1, auxiliar, tamanho;

    // VARIAVEIS DE PROCESSAMENTO
    int aposta = 2;
    int saldoNecessario = 0;
    int perda = -aposta;
    int ganho = aposta * 2;
    int lucro = ganho + perda;

    // LER VARIAVEL DE ITERACAO
    scanf("%d", &tamanho);

    for(int c = 1; c <= tamanho; c++){

        saldoNecessario = saldoNecessario + aposta;
        printf("A: %d\tV: %d\tD: %d\t S: %d\n", aposta, ganho, perda, lucro);

        // CONTROLADOR DE FIBONACCI
        auxiliar = aposta;
        aposta = anterior + aposta;
        anterior = auxiliar;

        // CALCULO DAS APOSTAS
        ganho = aposta * 2;
        perda = perda - aposta;
        lucro = ganho + perda;
        
    }

    printf("VALOR NECESSARIO: %d\n", saldoNecessario);
    return 0;
}