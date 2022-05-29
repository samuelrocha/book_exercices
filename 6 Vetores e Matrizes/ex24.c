#include <stdio.h>
#define N 3

int main(){
    int matrix[N][N], array[N];

    for(int i = 0; i < N; i++){
        array[i] = 0;
        for(int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            array[j] += matrix[i][j];
        }
    }
    
    for(int i = 0; i < N; i++){
        printf("COLUMN[%d]: %d\n", i, array[i]);
    }
    return 0;
}