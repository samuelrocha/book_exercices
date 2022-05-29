#include <stdio.h>

typedef struct{
    int x;
    int y;
} coordinates;

int main(){
    coordinates coord;
    printf("Type x value: ");
    scanf("%d", &coord.x);
    printf("Type y value: ");
    scanf("%d", &coord.y);
    
    printf("(%d,%d)\n", coord.x, coord.y);
    return 0;
}