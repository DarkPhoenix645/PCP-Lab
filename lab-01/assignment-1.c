#include <stdio.h>

int main() 
{
    // Calculating sum of digits of a 5 digit number
    int number;
    goto input;

    input:
        printf("Please enter a 5 digit number: ");
        scanf("%i", &number);
        if (number < 10000 || number > 99999)
        {
            goto input;
        }
        else
        {
            int sum = 0;
            int tmp = number;

            for (int i = 0; i < 5; i++)
            {
                sum += number % 10;
                number /= 10;
            }

            printf("Sum of the digits of input (%i) is: %i\n", tmp, sum);
            return 0;
        }
}