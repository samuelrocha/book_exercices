#include <stdio.h>

double pow(double, double);

int main(){
    double x, y, xy;
    printf("enter two number x^y: ");
    scanf("%lf %lf", &x, &y);
    xy = pow(x,y);
    printf("%.2lf^%.2lf = %.2lf\n", x, y, xy);
    return 0;
}

double pow(double x, double y){
    double x2 = 1;
    for(int i = 0; i < y; i++){
        x2 *= x;
    }
    return x2;
}