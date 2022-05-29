#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    scanf("%d", &x);
    x % 2 == 0 ? printf("%d eh par\n", x) : printf("%d eh impar\n", x);
    return 0;
}