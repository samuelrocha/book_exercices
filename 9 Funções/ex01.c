#include <stdio.h>

int bigger(int, int);

int main(){
    int x, y;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &x, &y);
    printf("THE BIGGER NUMBER IS %d\n", bigger(x,y));
    return 0;
}

int bigger(int x, int y){
    int value;
    if(x > y){
        value = x;
    }else{
        value = y;
    }
    return value;
}