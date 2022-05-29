#include <stdio.h>
int const N = 10;

int main(){
    // DECLARATIONS
    float values[N], sum_positives;
    int amount_negatives;
    sum_positives = amount_negatives = 0;

    // INPUT
    for(int i = 0; i < N; i++){
        scanf("%f", &values[i]);
    }

    // PROCESS
    for(int i = 0; i < N; i++){
        if(values[i] >= 0){
            sum_positives += values[i];
        }else{
            amount_negatives++;
        }
    }

    // OUTPUT
    printf("AMOUNT OF THE NEGATIVES: %d\n", amount_negatives);
    printf("SUM OF THE POSITIVES: %f\n", sum_positives);
    return 0;
}