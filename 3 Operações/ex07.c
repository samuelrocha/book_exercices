#include <stdio.h>
#include <stdlib.h>

int main(){
    double valor, cotacao;
    scanf("%lf %lf", &valor, &cotacao);
    printf("%lf\n", valor * cotacao);
    return 0;
}