#include <stdio.h>
#define N 4

int main(){
    int matrix[N][N], max, line, column;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(max < matrix[i][j]){
                max = matrix[i][j];
                line = i;
                column = j;
            }
        }   
    }
    printf("MAX = %d\tLINE: %d\tCOLUMN: %d\n", max, line, column);
    return 0;
}