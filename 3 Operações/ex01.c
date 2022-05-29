#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, antecessor, sucessor;
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("ANTECESSOR: %d\n", antecessor);
    printf("SUCESSOR: %d\n", sucessor);
    return 0;
}
