#include <stdio.h>

int main() 
{
    int a;
    printf("Please enter a number: ");
    scanf("%i", &a);
    
    a % 2 == 0 ? printf("Number is even") : printf("Number is odd");
}