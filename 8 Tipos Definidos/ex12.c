#include <stdio.h>

enum days_of_the_week{
    Domingo = 1,
    Segunda,
    Terca,
    Quarta,
    Quinta,
    Sexta,
    Sabado
};

int main(){
    int day;
    printf("ENTER A DAY OF THE WEEK... (1..7) ");
    scanf("%d", &day);
    switch(day){
        case Domingo:
            printf("Domingo\n");
            break;
        case Segunda:
            printf("Segunda\n");
            break;
        case Terca:
            printf("Terca\n");
            break;
        case Quarta:
            printf("Quarta\n");
            break;
        case Quinta:
            printf("Quinta\n");
            break;
        case Sexta:
            printf("Sexta\n");
            break;
        case Sabado:
            printf("Sabado\n");
            break;
        default:
            printf("ERROR!! BIP BIP...\n");
    }
    return 0;
}