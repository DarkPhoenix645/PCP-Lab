#include <stdio.h>

int main() 
{
    int n, temp, no_of_digits;
    printf("Enter a decimal number ");
    scanf("%d", &n);

    temp = n;
    no_of_digits = 0; 

    while (temp > 0)
    {
        no_of_digits++;
        temp /= 2;
    }

    int zero_counter = 0, one_counter = 0, digits[no_of_digits];
    int counter = 0;

    while (n > 0)
    {
        int digit = n % 2;
        n /= 2;

        if (digit == 0)
        {
            digits[no_of_digits - (counter + 1)] = 0;
            zero_counter++;
            counter++;
        }
        else 
        {
            digits[no_of_digits - (counter + 1)] = 1;
            one_counter++;
            counter++;
        }
    } 

    for (int i = 0; i < no_of_digits; i++)
    {
        printf("%d", digits[i]);
    }

    printf("\n");
    printf("Total zeroes: %d\n", zero_counter);
    printf("Total ones: %d\n", one_counter);
    return 0;
}