#include <stdio.h>
#define N 10

int main(){
    int array[N], auxiliary, index, condiction;
    condiction = 1;
    index = 0;

    while(index < N){
        printf("INSERT: ");
        scanf("%d", &auxiliary);
        for(int local_index = 0; local_index < index; local_index++){
            if(array[local_index] == auxiliary){
                condiction--;
            }
        }
        if(condiction){
            array[index] = auxiliary;
            index++;
        }else{
            printf("Error! No repeat pls...\n");
            condiction++;
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}