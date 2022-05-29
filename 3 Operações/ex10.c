#include <stdio.h>
#include <stdlib.h>
const float MONTANTE = 780000;

int main(){
    double ganhador1, ganhador2, ganhador3;
    ganhador1 = MONTANTE * 0.46;
    ganhador2 = MONTANTE * 0.32;
    ganhador3 = MONTANTE - (ganhador1 + ganhador2);
    printf("%lf %lf %lf\n", ganhador1, ganhador2, ganhador3);
    return 0;
}