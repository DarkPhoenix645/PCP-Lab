#include <stdio.h>

int main() 
{
    int a;
    printf("Please enter a number: ");
    scanf("%i", &a);
    
    a % 2 == 0 ? printf("Number is even\n") : printf("Number is odd\n");
    return 0;
}