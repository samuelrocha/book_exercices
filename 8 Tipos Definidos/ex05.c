#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

typedef struct{
    point top_left_point;
    point down_right_point;
} rectangle;

int main(){
    rectangle r;
    point p;
    printf("Type the top left point: (X,Y) ");
    scanf("%d %d", &r.top_left_point.x, &r.top_left_point.y);
    printf("Type the down right point: (X, Y) ");
    scanf("%d %d", &r.down_right_point.x, &r.down_right_point.y);

    printf("Type the new point: (X,Y) ");
    scanf("%d %d", &p.x, &p.y);

    if(p.x >= r.top_left_point.x && p.x <= r.down_right_point.x && p.y <= r.top_left_point.y && p.y >= r.down_right_point.y){
        printf("IN\n");
    }else{
        printf("OUT\n");
    }
    return 0;
}