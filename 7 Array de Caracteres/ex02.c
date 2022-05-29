#include <stdio.h>

int main(){
    char str[256];
    fgets(str, sizeof str, stdin);
    for(int i = 0; i < 4; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}