#include <stdio.h>
#include <stdlib.h>


int main(){
    unsigned int x, y, z;
    short int choose;
    double avarege;

    scanf("%d %d %d", &x, &y, &z);
    printf("1 - geometrica\n2 - ponderada\n3 - harmonica\n4 - aritmetica\n");
    getchar();
    scanf("%hd", &choose);
    switch (choose){
        case 1:
            avarege = x * y * z;
            break;
        case 2:
            avarege = (1 * x + 2 * y + 3 * z) / 6;
            break;
        case 3:
            avarege = 1 / ((1/x) + (1/y) + (1/z));
            break;
        case 4:
            avarege = (x + y + z) / 3;
            break;
        default:
            printf("YOU BURRO MEN!\n");
            return 0;
    }
    printf("%lf\n", avarege);
    return 0;
}