#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, esquerda, direita;
    scanf("%d %d", &x, &y);
    esquerda = x << y;
    direita = x >> y;
    printf("%d %d\n", esquerda, direita);
    return 0;
}