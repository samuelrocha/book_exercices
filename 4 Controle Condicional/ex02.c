#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == y){
        printf("valores iguais\n");
    }else{
        if(x > y){
            printf("%d eh maior\n", x);
        }else{
            printf("%d eh maior\n", y);
        }
    }
    return 0;
}