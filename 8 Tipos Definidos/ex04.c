#include <stdio.h>
#include <math.h>

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
    point object;
    float area, diameter, perimeter;
    printf("Type the top left point: (X,Y) ");
    scanf("%d %d", &r.top_left_point.x, &r.top_left_point.y);
    printf("Type the down right point: (X, Y) ");
    scanf("%d %d", &r.down_right_point.x, &r.down_right_point.y);

    object.x = r.down_right_point.x - r.top_left_point.x;
    object.y = r.top_left_point.y - r.down_right_point.y;

    area = object.x * object.y;
    perimeter = (object.x * 2) + (object.y * 2);
    diameter = sqrt(pow(object.x, 2) + pow(object.y, 2));
    printf("AREA: %.2f\nPERIMETER: %.2f\nDIAMETER: %.2f\n", area, perimeter, diameter);
    return 0;
}