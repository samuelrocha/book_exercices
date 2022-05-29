#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, h;
    scanf("%f %f", &a, &b);
    h = sqrt(pow(a, 2) + pow(b, 2));
    printf("%lf", h);
    return 0;
}