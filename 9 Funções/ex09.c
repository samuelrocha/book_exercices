#include <stdio.h>

double calc_average(double,double,double,char);

int main(){
    double grade1, grade2, grade3, average;
    char type;
    printf("first grade: ");
    scanf("%lf", &grade1);
    printf("second grade: ");
    scanf("%lf", &grade2);
    printf("third grade: ");
    scanf("%lf", &grade3);
    printf("what kind of average do you want?\n");
    printf("enter A for arithmetic\n");
    printf("enter P for ponderous\n");
    getchar();
    type = getchar();
    average = calc_average(grade1, grade2, grade3, type);
    printf("the average is %lf\n", average);
    return 0;
}

double calc_average(double grade1, double grade2, double grade3, char type){
    double average;
    if(type == 'A' || type == 'a'){
        average = (grade1 + grade2 + grade3) / 3;
    }else{
        if(type == 'P' || type == 'p'){
            average = (grade1 * 5 + grade2 * 3 + grade3 * 2) / 10;
        }else{
            average = 0;
        }
    }
    return average;
}