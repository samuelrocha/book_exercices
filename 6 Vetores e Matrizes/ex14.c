#include <stdio.h>
#include <math.h>
#define N 10

int main(){
    double array[N];
    double sum = 0, value, d, average;

    for(int i = 0; i < N; i++){
        scanf("%lf", &array[i]);
    }

    for(int i = 0; i < N; i++){
        sum += array[i];
    }
    average = (double)sum / N;
    sum = 0;
    for(int i = 0; i < N; i++){
        value = array[i] - average;
        sum += pow(value, 2);
    }

    d = sqrt(sum / (N-1));

    printf("%lf\n", d);
    return 0;
}