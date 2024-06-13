#include<stdio.h>

int main(){
    int student=0;
    int tutor=0;
     

    printf("Please enter the number of students and tutors: ");
    scanf("%d", &student);
    scanf("%d", &tutor);
    //printf("\n");
    printf("%d + %d = %d\n", student, tutor, student+tutor);

    return 0;
}