#include <stdio.h>
#define N 2

typedef struct{
    int day;
    int month;
    int year;
    int total_days;
} date;

int main(){
    date d[N];
    int days;

    for(int i=0; i<N; i++){
        printf("[%d] Enter day... ", i+1);
        scanf("%d", &d[i].day);
        printf("[%d] Enter month... ", i+1);
        scanf("%d", &d[i].month);
        printf("[%d] Enter year... ", i+1);
        scanf("%d", &d[i].year);
    }

    d[0].total_days = d[0].day + (d[0].month * 30) + (d[0].year * 365);
    d[1].total_days = d[1].day + (d[1].month * 30) + (d[1].year * 365);

    if(d[0].total_days > d[1].total_days){
        days = d[0].total_days - d[1].total_days;
    }else{
        days = d[1].total_days - d[0].total_days;
    }

    printf("CALENDER DAYS: %d\n", days);
    return 0;
}