#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, x2, d2;
    scanf("%d", &numero);
    x2 = numero << 1;
    d2 = numero >> 1;
    printf("MULT: %d\n", x2);
    printf("DIV: %d\n", d2);
    return 0;
}