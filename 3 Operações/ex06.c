#include <stdio.h>
#include <stdlib.h>
#define CONVERT 3.6 

int main(){
    float KM, M;
    scanf("%f", &KM);
    M = KM / CONVERT;
    printf("%f/s\n", M);
    return 0;
}