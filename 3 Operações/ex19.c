#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, ou_exclusivo, ou, e;
    scanf("%d %d", &x, &y);
    ou_exclusivo = x ^ y;
    ou = x | y;
    e = x & y;
    printf("%d %d %d\n", ou_exclusivo, ou, e);
    return 0;
}