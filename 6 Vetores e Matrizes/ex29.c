#include <stdio.h>
#define N 5

int main(){
    int matrix[N][N], sum_others = 0, sum_diagonals = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!(i == j) && !(i + j == N - 1)){
                sum_others += matrix[i][j];
            }else{
                sum_diagonals += matrix[i][j];
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("DIFERENCE: %d\n", sum_diagonals - sum_others);

    return 0;
}