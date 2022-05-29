#include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    printf("DIVISORES DE %d\n", number);
    for(int control = 1; control <= number; control++){
        if(number % control == 0){
            printf("%d ", control);
        }
    }
    printf("\n");
    return 0;
}