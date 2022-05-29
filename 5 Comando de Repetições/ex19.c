#include <stdio.h>
// 2n - 1 / n
int main(){
    int s = 0, lastN = 55;
    for(int n = 1; n <= lastN; n++){
        s += (2 * n - 1) / n;
    }
    printf("%d\n", s);
    return 0;
}