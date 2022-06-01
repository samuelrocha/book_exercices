#include <stdio.h>

union example{
    unsigned char x;
    unsigned short int x2;
};


int main(){
    union example e;
    printf("Enter the value > 256: ");
    scanf("%d", &e.x2);
    printf("first piece of value (x-256): %d\n", e.x);
    return 0;
}