#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 6

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

typedef struct{
    int day;
    int month;
    int year;
} date;

typedef struct{
    char day[3];
    char month[3];
    char year[5];
} date_string;

typedef struct{
    int id;
    char name[256];
    date birth_date;
} person;

int main(){
    person people[N];
    int young, older, more_days, less_days, days;
    date now;
    date_string now_string;
    time_t now_time;
    
    now_time = time(NULL);
    strftime(now_string.day, sizeof now_string.day, "%d", localtime(&now_time));
    strftime(now_string.month, sizeof now_string.month, "%m", localtime(&now_time));
    strftime(now_string.year, sizeof now_string.year, "%Y", localtime(&now_time));
    
    now.day = atoi(now_string.day);
    now.month = atoi(now_string.month);
    now.year = atoi(now_string.year);

    for(int i = 0; i < N; i++){
        people[i].id = i;
        printf("[%d] Enter name... ", i+1);
        scanf("%[^\n]", people[i].name);
        clear_keyboard_buffer();

        printf("[%d] Enter day of birth... ", i+1);
        scanf("%d", &people[i].birth_date.day);
        clear_keyboard_buffer();

        printf("[%d] Enter month of birth... ", i+1);
        scanf("%d", &people[i].birth_date.month);
        clear_keyboard_buffer();

        printf("[%d] Enter year of birth... ", i+1);
        scanf("%d", &people[i].birth_date.year);
        clear_keyboard_buffer();
    }

    young = 0;
    older = 0;
    days = now.day - people[0].birth_date.day;
    days += (now.month - people[0].birth_date.month) * 30;
    days += (now.year - people[0].birth_date.year) * 365;
    more_days = days;
    less_days = days;

    for(int i = 1; i < N; i++){
        days = now.day - people[i].birth_date.day;
        days += (now.month - people[i].birth_date.month) * 30;
        days += (now.year - people[i].birth_date.year) * 365;

        if(days > more_days){
            more_days = days;
            older = i;
        }

        if(days < less_days){
            less_days = days;
            young = i;
        }
    }

    printf("OLDER: %s\n", &people[older].name);
    printf("YOUNG: %s\n", &people[young].name);
    return 0;
}