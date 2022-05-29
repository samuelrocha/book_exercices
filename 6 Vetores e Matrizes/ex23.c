#include <stdio.h>
#define N 10

int main(){
    int matrix[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i < j){
                matrix[i][j] = 2 * i + 7 * j - 2;
            }else{
                if(i == j){
                    matrix[i][j] = 3 * i * i - 1;
                }else{
                    matrix[i][j] = 4 * i * i * i + 5 * j * j + 1;
                }
            }
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}