#include <stdio.h>
#define N 6

int main(){
    int values[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &values[i]);
    }
    for(int i = N-1; i >= 0; i--){
        printf("%d ", values[i]);
    }
    printf("\n");
    return 0;
}