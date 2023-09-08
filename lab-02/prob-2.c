#include <stdio.h>
#define MAX_NUMBERS 3

int main() 
{
    int numbers[MAX_NUMBERS];
    int max = 0;

    for (int i = 0; i < MAX_NUMBERS; i++)
    {
        printf("Please enter a number: ");
        scanf("%i", &numbers[i]);
    }
    
    for (int i = 0; i < MAX_NUMBERS; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("The largest number is %i\n", max);
    return 0;
}