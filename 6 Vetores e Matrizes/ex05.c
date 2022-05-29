#include <stdio.h>
int const N = 8;

int main(){
    int values[N];
    int X, Y, sum;
    for(int i = 0; i < N; i++){
        scanf("%d", &values[i]);
    }
    printf("INDEX FOR SUM: ");
    scanf("%d %d", &X, &Y);
    sum = values[X] + values[Y];
    printf("RESULT: %d\n", sum);
    return 0;
}