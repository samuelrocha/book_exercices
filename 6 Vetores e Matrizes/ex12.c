#include <stdio.h>
#define N 10

int main(){
    int array[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }
    printf("REPEAT: \n");
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(array[i] == array[j]){
                printf("%d\n", array[i]);
                break;
            }
        }
    }
    return 0;
}