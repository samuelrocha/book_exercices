#include <stdio.h>
#include <string.h>
#define N 256

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

int main(){
    char str[N];
    int jump;
    printf("PHRASE: ");
    scanf("%[^\n]", str);
    if(!strchr(str, '\n')){
        clear_keyboard_buffer();
    }
    printf("VALUE: ");
    scanf("%d", &jump);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] != ' '){
            str[i] += jump;
        }
    }
    printf("%s\n", str);
    return 0;
}