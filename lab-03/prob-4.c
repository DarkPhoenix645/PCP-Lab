#include <stdio.h>

int main() 
{
    int n, temp, counter;
    printf("Enter an integer number: ");
    scanf("%d", &n);

    temp = n;
    counter = 0; 

    while (temp > 0)
    {
        counter++;
        temp /= 10;
    }   

    int digits[counter];
    counter = 0;

    while (n > 0)
    {
        int digit = n % 10;
        n /= 10;

        digits[counter] = digit;
        counter++;
    } 

    if (counter % 2 == 0)
    {
        for (int i = 0; i < counter / 2; i++)
        {
            if (digits[i] != digits[counter - (i + 1)])
            {
                printf("Not a palindrome\n");
                return 0;
            }
        }

        printf("Palindrome\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < (counter - 1) / 2; i++)
        {
            if (digits[i] != digits[counter - (i + 1)])
            {
                printf("Not a palindrome\n");
                return 0;
            }
        }

        printf("Palindrome\n");
        return 0;
    }
}