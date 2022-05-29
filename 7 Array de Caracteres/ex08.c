#include <stdio.h>
#include <string.h>

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

int main(){
    char str1[256], str2[256];
    int i, j, there;
    i = j = there = 0;

    scanf("%255[^\n]", str1);
    if(!strchr(str1, '\n')){
        clear_keyboard_buffer();
    }
    scanf("%255[^\n]", str2);
    if(!strchr(str2, '\n')){
        clear_keyboard_buffer();
    }

    while (str1[i] != '\0'){
        if(str1[i] == str2[j]){
            j++;
            if(str2[j]== '\0'){
                there = 1;
            }
        }else{
            j = 0;
        }
        i++;
    }
    
    if(there){
        printf("THERE\n");
    }else{
        printf("AIN'T\n");
    }
    return 0;
}