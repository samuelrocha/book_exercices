#include <stdio.h>
#include <stdlib.h>
#define T_GRADE 3
#define T_STUDENT 5

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

typedef struct{
    int id;
    char name[256];
    float grade[T_GRADE];
} student;

int main(){
    student s[T_STUDENT];
    float average, larger = 0;
    int best_student_id;

    for (int i = 0; i < T_STUDENT; i++){
        average = 0;
        s[i].id = i + 1;
        printf("[%d] Type the student's name: ", s[i].id);
        scanf("%[^\n]", s[i].name);
        clear_keyboard_buffer();
        for(int j = 0; j < T_GRADE; j++){
            printf("[%d,%d] Type the student grade: ", s[i].id, j+1);
            scanf("%f", &s[i].grade[j]);
            clear_keyboard_buffer();
            average += s[i].grade[j];
        }
        average = average / 3.0;
        if(average > larger){
            larger = average;
            best_student_id = s[i].id;
        }
    }
    system("clear");
    printf("THE BEST STUDENT IS... ");
    for(int i = 0; i < T_STUDENT; i++){
        if(s[i].id == best_student_id){
            printf("%s\n", s[i].name);
            for(int j = 0; j < T_GRADE; j++){
                printf("[%d] GRADE: %.2f\n", j+1, s[i].grade[j]);
            }
            break;
        }
    }
    return 0;
}