#include <stdio.h>
#include <stdlib.h>

int main(){
    char input;
    float num1, num2;
    double result;
    printf("+ sum\n");
    printf("- subtraction\n");
    printf("* multiplication\n");
    printf("/ division\n");
    scanf("%c", &input);
    getchar();
    scanf("%f %f", &num1, &num2);
    switch(input){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0){
                printf("Erro, divisao por zero!\n");
                return 0;
            }
            result = num1 / num2;
            break;
        default:
            printf("entrada incorreta!\n");
    }
    printf("%lf\n", result);
    return 0;
}