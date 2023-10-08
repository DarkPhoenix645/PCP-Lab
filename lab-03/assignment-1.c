#include <stdio.h>

int main() 
{
    int n, counter = 0;
    printf("Enter a number ");
    scanf("%d", &n);

    while (n > 0)
    {
        counter++;
    }

    int digits[counter];
    counter = 0;

    while (n > 0)
    {
        digits[counter] = n % 10;
        n /= 10;
        counter++;
    }

    for (int i = 0; i < counter; i++)
    {
        switch (counter)
        {
        case 1:
            break;
        
        default:
            break;
        }
    }
    

    return 0;
}