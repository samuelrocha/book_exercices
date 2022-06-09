// v = 4/ 3 * pi * r3 circle
#include <stdio.h>
#include <math.h>
#define PI 3.14

double circle_volume(double);

int main(){
    double radius, volume;
    printf("ENTER RADIUS: ");
    scanf("%lf", &radius);
    volume = circle_volume(radius);
    printf("VOLUME IS %lf\n", volume);
    return 0;
}

double circle_volume(double radius){
    double volume;
    volume = 4 / 3.0 * PI * pow(radius,3);
    return volume;
}