#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main(){
    float raio, A;
    scanf("%f", &raio);
    A = PI * raio * raio;
    printf("%f\n", A);
    return 0;
}