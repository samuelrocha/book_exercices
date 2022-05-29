#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia, mes, ano;
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    
    printf("%d/%d/%d\n", dia, mes, ano);
    return 0;
}