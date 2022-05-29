#include <stdio.h>

int main(){
    unsigned int number, column, count;
    column = count = 1;
    scanf("%d", &number);
    while (count <= number){
        for(int control = 1; control <= column; control++){
            if(count > number){
                break;
            }
            printf("%d ", count);
            count++;
        }
        column++;
        printf("\n");
    }
    return 0;
}