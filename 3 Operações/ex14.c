#include <stdio.h>
#include <stdlib.h>
#define UPPER 32

int main(){
    unsigned char letter, new_letter;
    scanf("%c", &letter);
    new_letter = letter + UPPER;
    printf("%c\n", new_letter);
    return 0;
}