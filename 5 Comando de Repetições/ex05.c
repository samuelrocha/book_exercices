#include <stdio.h>

int main() {
    unsigned int num, value, sum;
    sum = num = value = 0;
    do{
      num++;
      if(num % 2 == 0){
        sum += num;
        value++;
      }
    }while(value < 50);
    printf("%d\n", sum);
    return 0;
}
  