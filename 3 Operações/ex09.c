#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main(){
    double G, R;
    scanf("%lf", &G);
    R = G * (PI / 180.0);
    printf("%lf", R);
    return 0;
}