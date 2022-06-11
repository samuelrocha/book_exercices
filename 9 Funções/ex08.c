#include <stdio.h>
#include <math.h>

int is_perfect_square(int);

int main(){
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if(is_perfect_square(x)){
        printf("it's a perfect square\n");
    }else{
        printf("it's not a perfect square\n");
    }
    return 0;
}

int is_perfect_square(int x){
    double root;
    int true = 0;
    root = sqrt(x);
    x = root;
    if(root - x == 0){
        true = 1;
    }
    return true;
}