#include <stdio.h>

int main(){
    char str[256];

    printf("What's your name?\nR: ");
    fgets(str, 255, stdin);
    printf("Fuck you %s", str);
    setbuf(stdin, NULL);
    printf("Hey Dude!, what's your name?\nR: ");
    scanf("%s", str);
    printf("I love you %s\n", str);
    setbuf(stdin, NULL);
}