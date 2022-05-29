#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main(){
    float altura, raio, V;
    scanf("%f %f", &altura, &raio);
    V = PI * raio * raio * altura;
    printf("%f\n", V);
    return 0;
}