#include <stdio.h>
#include <string.h>
#define DISCOUNT (10 / 100.0)
#define N 256

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

int main(){
    char product[N];
    double price, discount, price_with_discount;
    printf("What's the name of the product: ");
    scanf("%[^\n]", product);
    if(!strchr(product, '\n')){
        clear_keyboard_buffer();
    }
    printf("And how many this: ");
    scanf("%lf", &price);
    discount = price * DISCOUNT;
    price_with_discount = price - discount;
    printf("PRODUCT: %s\nFULL PRICE: %lf\nDISCOUNT: %lf\nPRICE: %lf\n", product, price, discount, price_with_discount);
    return 0;
}