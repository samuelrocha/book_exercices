#include <stdio.h>
// 2n - 1 / n
int main(){
    int lastN;
    double e = 0;
    scanf("%d", &lastN);
    for(int n = 1; n <= lastN; n++){
        int divisor = 1;
        for(int control = 1; control <= n; control++){
            divisor = divisor * control;
        }
        e += (double)1 / divisor;
    }
    printf("%lf\n", e);
    return 0;
}