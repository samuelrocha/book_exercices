#include <stdio.h>

int main(){
    unsigned int number, qtdDiv = 0;
    scanf("%d", &number);
    for(int control = 1; control <= number; control++){
        if(number % control == 0){
            qtdDiv++;
        }
    }
    if(qtdDiv == 2){
        printf("eh primo\n");
    }else{
        printf("nao eh primo\n");
    }
    return 0;
}