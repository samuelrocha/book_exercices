#include <stdio.h>

int main(){
    int n;
    double Hn = 0;
    scanf("%d", &n);
    for(int control = 1; control <= n; control++){
        Hn += (double)1 / control;
    }
    printf("%lf\n", Hn);
    return 0;
}