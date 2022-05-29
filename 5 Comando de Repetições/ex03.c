#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%d", &num);
    for(int count = 0; count < num; count++){
      if(count % 2 != 0){
        printf("%d\n", count);
      }
    }
    return 0;
}
  