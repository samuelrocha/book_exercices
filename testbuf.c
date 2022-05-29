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
    
    for(int i = 0; i < 4; i++){
        printf("Digite: ");
        fgets(str, sizeof str, stdin);
        if(!strchr(str, '\n')){
            clear_keyboard_buffer();
        }
    }
    return 0;
}