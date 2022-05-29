#include <stdio.h>
#define N 2

typedef struct{
    int x;
    int y;
} coordinates;

int main(){
    coordinates point[N], distance;

    for(int i = 0; i < N; i++){
        printf("(%d) Type x value: ", i + 1);
        scanf("%d", &point[i].x);
        printf("(%d) Type y value: ", i + 1);
        scanf("%d", &point[i].y);
    }

    distance.x = point[0].x - point[1].x;
    distance.y = point[0].y - point[1].y;
    
    printf("The distance between both is: (%d,%d)\n", distance.x, distance.y);
    return 0;
}