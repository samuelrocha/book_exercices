#include <stdio.h>

int greatest_prime_factor(int);

int main(){
    int x, greatest;
    printf("enter a number: ");
    scanf("%d", &x);
    greatest = greatest_prime_factor(x);
    printf("the greastest prime factor is %d\n", greatest);
    return 0;
}

int greatest_prime_factor(int x){
    int greatest = 2, count;
    for(int i = 2; i <= x; i++){
        count = 0;
        for(int j = 2; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 1 && x % i == 0){
            greatest = i;
        }
    }
    return greatest;
}