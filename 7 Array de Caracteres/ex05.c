#include <stdio.h>
#include <string.h>

int main(){
    char str[256], auxiliar;
    int len;
    fgets(str, sizeof str, stdin);
    len = strchr(str, '\n') ? strlen(str) - 2 : strlen(str) - 1;
    for(int i = 0, j = len; i < j; i++, j--){
        auxiliar = str[i];
        str[i] = str[j];
        str[j] = auxiliar;
    }
    printf("%s", str);
    return 0;
}