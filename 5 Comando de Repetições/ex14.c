#include <stdio.h>

int main(){
    unsigned int number, before = 0, currently = 1;
    scanf("%d", &number);
    if(number != 0){
        printf("%d ", before);
    }
    for(int term = 2; term <= number; term++){
        printf("%d ", currently);
        currently = currently + before;
        before = currently - before;
    }
    printf("\n");
}