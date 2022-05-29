#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    char div5, div3;
    scanf("%d", &number);
    div5 = number % 5 == 0;
    div3 = number % 3 == 0;
    if(div3 && div5 || !div3 && !div5){
        printf("nao aprovado\n");
        return 0;
    }
    div3 ? printf("divide por 3\n") : printf("divide por 5\n");
    return 0;
}