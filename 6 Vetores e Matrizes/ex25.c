#include <stdio.h>
#define X 10
#define Y 3

int main(){
    float grades[X][Y];
    int worse_grades[Y], exam_number;

    for(int i = 0; i < X; i++){
        printf("STUDANT %d:\n", i+1);
        for(int j = 0; j < Y; j++){
            scanf("%f", &grades[i][j]);
            worse_grades[j] = 0;
        }
    }

    for(int i = 0; i < X; i++){
        exam_number = 0;
        for(int j = 1; j < Y; j++){
            if(grades[i][exam_number] > grades[i][j]){
                exam_number = j;
            }
        }
        worse_grades[exam_number]++;
    }

    for(int i = 0; i < Y; i++){
        printf("WORSE IN EXAM %d: %d\n", i+1, worse_grades[i]);
    }

    return 0;
}