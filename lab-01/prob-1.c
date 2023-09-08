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
        printf("Sum: %i\nDifference: %i\nProduct: %i\nDivision by zero not defined\nModulus: %i", a+b, a-b, a*b, a%b);
        return 0;
    }

    printf("Sum: %i\nDifference: %i\nProduct: %i\nDivision: %i\nModulus: %i", a+b, a-b, a*b, a/b, a%b);
    return 0;
}