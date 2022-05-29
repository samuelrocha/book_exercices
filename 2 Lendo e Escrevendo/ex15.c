#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    int i;
    float f;
    scanf("%c %i %f", &c, &i, &f);
    printf("%c %i %f\n", c, i, f);
    printf("\t%c\t%i\t%f\n", c, i, f);
    printf("%c\n%i\n%f\n", c, i, f);
    return 0;
}