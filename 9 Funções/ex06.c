//IMC = peso/(altura * altura)
#include <stdio.h>
#include <math.h>

double calc_imc(double, double);

int main(){
    double weight, height, imc;
    printf("ENTER YOUR WEIGHT: ");
    scanf("%lf", &weight);
    printf("ENTER YOUR HEIGHT: ");
    scanf("%lf", &height);
    imc = calc_imc(weight,height);
    printf("YOUR IMC IS %lf\n", imc);
    return 0;
}

double calc_imc(double weight, double height){
    double imc;
    imc = weight / pow(height, 2);
    return imc;
}