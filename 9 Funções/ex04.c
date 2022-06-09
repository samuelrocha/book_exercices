#include <stdio.h>
#include <math.h>
#define PI 3.14

double cylinder_volume(double, double);

int main(){
    double radius, height, volume;
    printf("ENTER RADIUS: ");
    scanf("%lf", &radius);
    printf("ENTER HEIGHT: ");
    scanf("%lf", &height);
    volume = cylinder_volume(radius, height);
    printf("VOLUME IS %lf\n", volume);
    return 0;
}

double cylinder_volume(double radius, double height){
    double volume;
    volume = PI * pow(radius,2) * height;
    return volume;
}