#include <stdio.h>
#define N 10

int main(){
    int values[N];
    int min, max;
    
    scanf("%d", &values[0]);
    min = max = values[0];

    for(int i = 1; i < N; i++){
        scanf("%d", &values[i]);
        if(values[i] > max){
            max = values[i];
        }else{
            if(values[i] < min){
                min = values[i];
            }
        }
    }
    printf("MAX VALUE: %d\n", max);
    printf("MIN VALUE: %d\n", min);
    return 0;
}