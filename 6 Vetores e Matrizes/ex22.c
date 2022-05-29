#include <stdio.h>
#define N 3

int main(){
    int matrix[N][N], sum = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i + j == N - 1){
                sum += matrix[i][j];
            }
        }   
    }
    printf("SUM = %d\n", sum);
    return 0;
}