#include <stdio.h>

enum months{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main(){
    int month;
    printf("Enter a month: [1..12] ");
    scanf("%d", &month);

    switch(month){
        case January:
            printf("January\n31 days\n");
            break;
        case February:
            printf("February\n28 days\n");
            break;
        case March:
            printf("March\n31 days\n");
            break;
        case April:
            printf("April\n30 days\n");
            break;
        case May:
            printf("May\n31 days\n");
            break;
        case June:
            printf("June\n30 days\n");
            break;
        case July:
            printf("July\n31 days\n");
            break;
        case August:
            printf("August\n31 days\n");
            break;
        case September:
            printf("September\n30 days\n");
            break;
        case October:
            printf("October\n31 days\n");
            break;
        case November:
            printf("November\n30 days\n");
            break;
        case December:
            printf("December\n31 days\n");
            break;
        default:
            printf("ERROR!\n");
    }
}