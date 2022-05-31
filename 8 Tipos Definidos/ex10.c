#include <stdio.h>
#define LEN 256

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

typedef struct{
    char name[LEN];
    char sport[LEN];
    int age;
    float height;
} athlete;

int main(){
    athlete a[5], aux;

    // INPUT
    for(int i = 0; i < 5; i++){
        printf("[%d] Enter athlet name... ", i+1);
        scanf("%[^\n]", a[i].name);
        clear_keyboard_buffer();
        printf("[%d] Enter athlet sport... ", i+1);
        scanf("%[^\n]", a[i].sport);
        clear_keyboard_buffer();
        printf("[%d] Enter athlet age... ", i+1);
        scanf("%d", &a[i].age);
        clear_keyboard_buffer();
        printf("[%d] Enter athlet height... ", i+1);
        scanf("%f", &a[i].height);
        clear_keyboard_buffer();
        printf("\n");
    }

    // PROCESSING
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(a[i].age < a[j].age){
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    // OUTPUT
    printf("FROM OLDEST TO YOUNGEST: \n");
    for(int i = 0; i < 5; i++){
        printf("\t%s\n", a[i].name);
    }

    return 0;
}