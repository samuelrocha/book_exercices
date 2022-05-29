#include <stdio.h>
#include <string.h>

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

int main(){
    char str[256], letter;
    int count, i;
    count = i = 0;
    fgets(str, sizeof str, stdin);
    if(!strchr(str, '\n')){
        clear_keyboard_buffer();
    }
    letter = getchar();
    while(str[i] != '\0'){
        switch (str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                str[i] = letter;
                break;
            default:
                break;
        }
        i++;
    }
    printf("NEW STR: %s", str);
    printf("COUNT: %i\n", count);
    return 0;
}