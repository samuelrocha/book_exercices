#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, inverso;
    scanf("%d", &numero);
    inverso = (numero % 10);
    numero = numero / 10;
    inverso = (numero % 10) + inverso * 10;
    numero = numero / 10;
    inverso = (numero % 10) + inverso * 10;
    printf("%d\n", inverso);
    return 0;
}