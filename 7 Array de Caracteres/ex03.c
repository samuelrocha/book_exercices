#include <stdio.h>

int main(){
    char str[256];
    int i = 0;
    fgets(str, sizeof str, stdin);
    while(str[i] != '\n' && str[i] != '\0'){
        i++;
    }
    printf("LEN: %d\n", i);
    return 0;
}