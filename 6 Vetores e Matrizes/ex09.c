#include <stdio.h>
#define N 10

int main(){
    int A[N], B[N], C[N];

    // INPUT
    printf("ARRAY A:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    printf("ARRAY B:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &B[i]);
    }

    // PROCESS
    for(int i = 0; i < N; i++){
        C[i] = A[i] - B[i];
    }

    // OUTPUT
    for(int i = 0; i < N; i++){
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}