#include <stdio.h>
#include <stdlib.h>

int main(){
    double C, F;
    scanf("%lf", &C);
    F = C * (9.0/5.0) + 32.0;
    printf("%lf", F);
    return 0;
}