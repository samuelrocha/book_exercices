#include <stdio.h>
#include <string.h>

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

int main(){
    char str[256];

    scanf("%[^\n]", str);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] = str[i] + 32;
        }
    }

    printf("%s\n", str);
}