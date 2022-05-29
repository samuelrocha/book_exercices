#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura, peso;
    char sexo;
    scanf("%f %c", &altura, &sexo);
    switch (sexo){
        case 'm':
        case 'M':
            peso = (72.7 * altura) - 58;
            break;
        case 'f':
        case 'F':
            peso = (61.1 * altura) - 44.7;
            break;
        default:
            peso = 0;
    }
    peso == 0 ? printf("entradas incorretas\n") : printf("Peso ideal: %f\n", peso);
    return 0;
}