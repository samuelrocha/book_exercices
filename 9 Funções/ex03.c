#include <stdio.h>

double convert_celsius(double);

int main(){
    double fahrenheit, celsius;
    printf("ENTER A TEMPERATURE IN FAHRENHEIT: ");
    scanf("%lf", &fahrenheit);
    celsius = convert_celsius(fahrenheit);
    printf("TEMPERATURE CONVERTED TO CELSIUS: %lf\n", celsius);
    return 0;
}

double convert_celsius(double fahrenheit){
    double celsius;
    celsius = (fahrenheit - 32) * (5.0/9.0);
    return celsius;
}