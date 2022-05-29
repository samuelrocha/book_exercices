#include <stdio.h>
#define N 20

int main(){
    float x[N], square[N];
    for(int i = 0; i < N; i++){
        scanf("%f", &x[i]);
    }
    for(int i = 0; i < N; i++){
        square[i] = x[i] * x[i];
    }
    for(int i = 0; i < N; i++){
        printf("%f (square): %f \n", x[i], square[i]);
    }
    return 0;
}