#include <stdio.h>

int main() 
{
    // Swapping two variables without a temp variable
    int a, b;
    printf("Please enter the value of a: ");
    scanf("%i", &a);
    printf("Please enter the value of b: ");
    scanf("%i", &b);

    printf("Values before swap --> a: %i, b: %i\n", a, b);

    a = a * b;
    b = a / b;        // b is now (ab)/b which is essentially a
    a = a / b;        // a is now (ab)/a (as b assumed value of a in previous step) which is essentially b

    printf("Values before swap --> a: %i, b: %i\n", a, b);
    return 0;
}