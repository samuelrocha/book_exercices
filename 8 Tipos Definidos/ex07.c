#include <stdio.h>
#define N 5

typedef struct{
    int hour;
    int minute;
    int second;
} time;

int main(){
    time t[N], more_after;

    for(int i = 0; i < N; i++){
        printf("[%d] Enter hours... ", i+1);
        scanf("%d", &t[i].hour);

        printf("[%d] Enter minutes... ", i+1);
        scanf("%d", &t[i].minute);

        printf("[%d] Enter seconds... ", i+1);
        scanf("%d", &t[i].second);
    }

    more_after.hour = t[0].hour;
    more_after.minute = t[0].minute;
    more_after.second = t[0].second; 

    for(int i = 1; i < N; i++){
        if(more_after.hour < t[i].hour){
            more_after.hour = t[i].hour;
            more_after.minute = t[i].minute;
            more_after.second = t[i].second;
        }else{
            if(more_after.hour == t[i].hour){
                if(more_after.minute < t[i].minute){
                    more_after.hour = t[i].hour;
                    more_after.minute = t[i].minute;
                    more_after.second = t[i].second;
                }else{
                    if(more_after.minute == t[i].minute){
                        if(more_after.second < t[i].second){
                            more_after.hour = t[i].hour;
                            more_after.minute = t[i].minute;
                            more_after.second = t[i].second;
                        }
                    }
                }
            }
        }
    }
    printf("%dh %dm %ds\n", more_after.hour, more_after.minute, more_after.second);
    return 0;
}