#include <stdio.h>

int main() 
{
    // Basic Arithmetic
    int a, b;
    printf("Please enter the first operand: ");
    scanf("%i", &a);
    printf("Please enter the second operand: ");
    scanf("%i", &b);

    if (b == 0)
    {
        printf("Sum: %i\n Difference: %i\n Product: %i\n Division by zero not defined /n", a+b, a-b, a*b);
        return 0;
    }

    printf("Sum: %i\n Difference: %i\n Product: %i\n Division: %i\n", a+b, a-b, a*b, a/b);
    return 0;
}