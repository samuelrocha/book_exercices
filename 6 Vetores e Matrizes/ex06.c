#include <stdio.h>
#define N 10

int main(){
    int values[N];
    int amount = 0;

    for(int i = 0; i < N; i++){
        scanf("%d", &values[i]);
        if(values[i] % 2 == 0){
            amount++;
        }
    }
    printf("AMOUNT OF EVENS: %d\n", amount);
    return 0;
}