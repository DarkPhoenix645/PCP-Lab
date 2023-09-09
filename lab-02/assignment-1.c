#include <stdio.h>

int main() 
{
    int year;
    printf("Please enter any year: ");
    scanf("%i", &year);

    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        printf("The given year is a leap year.\n");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("The given year is a leap year.\n");
    }
    else
    {
        printf("The given year is not a leap year.\n");
    }

    return 0;
}