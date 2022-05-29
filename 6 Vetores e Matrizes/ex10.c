#include <stdio.h>
#define N 100

int main(){
    int array[N], i = 0, number = 1;
    while (i < N){
        if(!(number % 7 == 0)){
            array[i] = number;
            i++;
        }
        number++;
    }
    for (int i = 0; i < N; i++){
        if(i % 10 == 0 && i != 0){
            printf("\n");
        }
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}