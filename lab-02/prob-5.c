#include <stdio.h>
#define NUMBER_OF_SUBJECTS 5

int main() 
{
    int numbers[NUMBER_OF_SUBJECTS];
    printf("Please enter the marks of first subject: ");
    scanf("%i", &numbers[0]);

    printf("Please enter the marks of second subject: ");
    scanf("%i", &numbers[1]);

    printf("Please enter the marks of third subject: ");
    scanf("%i", &numbers[2]);

    printf("Please enter the marks of fourth subject: ");
    scanf("%i", &numbers[3]);

    printf("Please enter the marks of fifth subject: ");
    scanf("%i", &numbers[4]);

    int sum = 0;
    for (int i = 0; i < NUMBER_OF_SUBJECTS; i++)
    {
        sum += numbers[0];
    }    

    int percentage = sum / NUMBER_OF_SUBJECTS;

    if (percentage >= 90)
    {
        printf("Grade A\n");
    }
    else if (percentage >= 80)
    {
        printf("Grade B\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade C\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade D\n");
    }
    else if (percentage >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}