#include <stdio.h>
#include <stdlib.h>

enum items{
    Bag = 1,
    Book,
    Pen
};

int main(){
    int select;
    system("clear");
    printf("=======================\n");
    printf("======= LOJINHA =======\n");
    printf("=======================\n");
    printf("1 - BAG\n");
    printf("2 - BOOK\n");
    printf("3 - PEN\n");
    printf("Enter item... ");
    scanf("%d", &select);
    system("clear");
    printf("=======================\n");
    printf("======= LOJINHA =======\n");
    printf("=======================\n");
    printf("TOTAL TO PAY: \n\n");
    switch(select){
        case Bag:
            printf("BAG... $35.00\n");
            break;
        case Book:
            printf("BOOK... $10.00\n");
            break;
        case Pen:
            printf("PEN... $1.50\n");
            break;
    }
    printf("\n");
    return 0;
}