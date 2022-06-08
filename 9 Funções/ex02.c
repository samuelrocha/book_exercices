#include <stdio.h>

void print_month_with_days(int n);

int main(){
    int n;
    printf("ENTER A NUMBER (1..12): ");
    scanf("%d", &n);
    print_month_with_days(n);
    return 0;
}

void print_month_with_days(int n){
    switch (n)
    {
    case 1:
        printf("January with 31 days\n");
        break;
    case 2:
        printf("February with 28 days\n");
        break;
    case 3:
        printf("March with 31 days\n");
        break;
    case 4:
        printf("April with 30 days\n");
        break;
    case 5:
        printf("May with 31 days\n");
        break;
    case 6:
        printf("June with 31 days\n");
        break;
    case 7:
        printf("July with 30 days\n");
        break;
    case 8:
        printf("August with 31 days\n");
        break;
    case 9:
        printf("September with 30 days\n");
        break;
    case 10:
        printf("October with 31 days\n");
        break;
    case 11:
        printf("November with 30 days\n");
        break;
    case 12:
        printf("December with 31 days\n");
        break;
    default:
        printf("ERROR!");
        break;
    }
}