#include <stdio.h>

int main()
{
    int midterm, finalExam;
    float successGrade;
    printf("Please enter your midterm and final exam scores in order: ");
    scanf("%d %d", &midterm, &finalExam);
    successGrade = midterm * 0.4 + finalExam * 0.6;
    if (successGrade >= 50)
    {
        if (successGrade >= 60)
        {
            printf("Success Grade = %f and the student is successful", successGrade);
        }
        else
        {
            printf("Success Grade = %f and the student is conditionally successful", successGrade);
        }
    }
    else {
        printf("Success Grade = %f and the student is unsuccessful", successGrade);
    }

    return 0;
}