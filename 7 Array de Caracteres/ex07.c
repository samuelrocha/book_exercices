#include <stdio.h>
#include <string.h>

int main(){
    char str[256];
    int is = 1;
    scanf("%s", str);
    for(int i = 0, j = strlen(str) - 1; i < j; i++, j--){
        if(str[i] != str[j]){
            is = 0;
        }
    }
    if(is){
        printf("PALINDROME\n");
    }else{
        printf("IT'S NOT A PALINDROME\n");
    }
    return 0;
}