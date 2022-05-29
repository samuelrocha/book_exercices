#include <stdio.h>

int main(){
    int number, sum = 0;
    scanf("%d", &number);
    printf("SOMA DOS DIVISORES DE %d\n", number);
    for(int control = 1; control < number; control++){
        if(number % control == 0){
            sum += control;
        }
    }
    printf("%d\n", sum);
    return 0;
}