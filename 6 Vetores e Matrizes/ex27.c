#include <stdio.h>
#define N 6

int main(){
    int matrix[N][N], sum = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            sum += matrix[i][j];
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("SUM: %d\n", sum);
    return 0;
}