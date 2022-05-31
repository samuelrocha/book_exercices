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
    athlete a[5], older, higher;

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

    older = a[0];
    higher = a[0];

    for(int i = 0; i < 5; i++){
        if(a[i].age > older.age){
            older = a[i];
        }
        if(a[i].height > higher.height){
            higher = a[i];
        }
    }

    printf("HIGHER: %s\n", higher.name);
    printf("OLDER: %s\n", older.name);
    return 0;
}