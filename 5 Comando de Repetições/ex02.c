#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%d", &num);
    while(num > 0){
      num--;
      printf("%d\n", num);
    }
    return 0;
}
