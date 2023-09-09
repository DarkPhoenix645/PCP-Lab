#include <stdio.h>

int main() 
{
    int numbers[3];
    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Please enter a number: ");
        scanf("%i", &numbers[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("The largest number is %i\n", max);
    return 0;
}