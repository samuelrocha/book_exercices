#include <stdio.h>
#define N 10

int main(){
    int array[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(array[i] > array[j]){
                int swap;
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}