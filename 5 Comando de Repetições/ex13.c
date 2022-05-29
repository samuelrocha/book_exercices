#include <stdio.h>

int main(){
    int div3, div5, breque = 0, linha = 1;
    for(int control = 1; control <= 1000; control++){
        div3 = control % 3 == 0 ? 1 : 0;
        div5 = control % 5 == 0 ? 1 : 0;
        if(div3){
            printf("%d\t", control);
            breque++;
        }else{
            if(div5){
                printf("%d\t", control);
                breque++;
            }
        }
        if(breque == 16 * linha){
            printf("\n");
            linha++;
        }
    }
    printf("\n");
    return 0;
}