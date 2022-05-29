#include <stdio.h>
#define N 4

int main(){
    int matrix[N][N], amount = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("X > 10: \n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(matrix[i][j] > 10){
                printf("%d\n", matrix[i][j]);
                amount++;
            }
        }   
    }
    printf("AMOUNT = %d\n", amount);
    return 0;
}