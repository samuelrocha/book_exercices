#include <stdio.h>
#define N 5

int main(){
    int values[N], sum = 0;
    double average;
    for(int i = 0; i < N; i++){
        scanf("%d", &values[i]);
        sum += values[i];
    }
    printf("Numbers: ");
    for(int i = 0; i < N; i++){
        printf("%d ", values[i]);
    }
    average = (double)sum / N;
    printf("\nAverage: %lf\n", average);
    return 0;
}