#include <stdio.h>
#include <string.h>
#define N 256

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

typedef struct{
    char road[N];
    int number;
} address;

typedef struct{
    char name[N];
    int age;
    address addr;
} person;

int main(){
    person p;

    printf("Type your name: ");
    scanf("%256[^\n]", p.name);
    clear_keyboard_buffer();

    printf("Type your age: ");
    scanf("%d", &p.age);
    clear_keyboard_buffer();

    printf("Type your road: ");
    scanf("%256[^\n]", p.addr.road);
    clear_keyboard_buffer();

    printf("Type yout number: ");
    scanf("%d", &p.addr.number);

    printf("NAME: %s\nAGE: %i\nROAD: %s\nNUMBER: %d\n", p.name, p.age, p.addr.road, p.addr.number);
    return 0;
}