#include <stdio.h>

int main() {
    unsigned int num, value;
    num = value = 0;
    do{
      num++;
      if(num % 3 == 0){
        printf("%d\n", num);
        value++;
      }
    }while(value < 5);
    return 0;
}
  