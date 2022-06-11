#include <stdio.h>

int arithmetic(double,double,char);

int main(){
    double x, y, result;
    char op;
    printf("enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    printf("enter a operation(+,-,/,*): ");
    getchar();
    op = getchar();
    result = arithmetic(x, y, op);
    printf("the result is %lf\n", result);
    return 0;
}

int arithmetic(double x, double y, char op){
    double result;
    switch (op){
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '/':
            if(y == 0){
                result = 0;
            }else{
                result = x / y;
            }
            break;
        case '*':
            result = x * y;
            break;
        default:
            result = 0;
            break;
    }
    return result;
}