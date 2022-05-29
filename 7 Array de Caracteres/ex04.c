#include <stdio.h>
#include <string.h>

int main(){
    char str[8];
    fgets(str, sizeof str, stdin);
    for(int i = strchr(str, '\n') ? strlen(str) - 2 : strlen(str) - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}