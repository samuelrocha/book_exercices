#include <stdio.h>
#include <math.h>
#define N 5

int main(){
    int A[N][N], B[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            B[i][j] = pow(A[i][j], 2);
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}