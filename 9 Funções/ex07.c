#include <stdio.h>

int to_seconds(int,int,int);

int main(){
    int hours, minutes, seconds;
    printf("ENTER TIME(HOURS MINUTES SECONDS): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);
    seconds = to_seconds(hours, minutes, seconds);
    printf("SECONDS: %d\n", seconds);
    return 0;
}

int to_seconds(int hours, int minutes, int seconds){
    return ((hours * 60 + minutes) * 60) + seconds;
}