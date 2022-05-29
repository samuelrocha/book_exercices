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
    char str1[N], str2[N];
    printf("FIRST WORD: ");
    scanf("%[^\n]", str1);
    if(!strchr(str1, '\n')){
        clear_keyboard_buffer();
    }
    printf("SECOND WORD: ");
    scanf("%[^\n]", str2);
    if(!strchr(str2, '\n')){
        clear_keyboard_buffer();
    }
    for (int i = 0; i < strlen(str1); i++)
    {
        if(str2[i] == '\n'){
            printf("%s\n", str2);
            printf("%s\n", str1);
            break;
        }else{
            if(str1[i] < str2[i]){
                printf("%s\n", str1);
                printf("%s\n", str2);
                break;
            }else{
                if(str1[i] > str2[i]){
                    printf("%s\n", str2);
                    printf("%s\n", str1);
                    break;
                }else{
                    if(i == strlen(str1) - 1){
                        printf("%s\n", str1);
                        printf("%s\n", str2);
                        break;
                    }else{
                        continue;
                    }
                }
            }
        }
    }
    return 0;
}