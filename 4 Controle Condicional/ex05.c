#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x;
    scanf("%lf", &x);
    if(x > 0){
        printf("%lf\n", pow(x,2));
        printf("%lf\n", sqrt(x));
    }
    return 0;
}