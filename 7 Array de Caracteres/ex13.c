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
    int i, j;
    printf("WRITE A STRING: ");
    scanf("%[^\n]", str);
    if(!strchr(str, '\n')){
        clear_keyboard_buffer();
    }
    printf("INTERVAL (EX 1 7): ");
    scanf("%d%d", &i, &j);

    if(j >= strlen(str) || i < 0 || j < 0){
        printf("POSITION INVALID\n");
    }else{
        printf("RESULT: ");
        if(j < i){
            for(; i >= j; i--){
                printf("%c", str[i]);
            }
        }else{
            for(; i <= j; i++){
                printf("%c", str[i]);
            }  
        }
        printf("\n");
    }
    return 0;
}