#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned short int x, y;
    scanf("%d", &x);
    y = ~x;
    printf("%d\n", y);
    return 0;
}