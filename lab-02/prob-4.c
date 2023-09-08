#include <stdio.h>

int main() 
{
    int a,b,c;
    printf("Please enter the length of first side: ");
    scanf("%i", &a);
    
    printf("Please enter the length of second side: ");
    scanf("%i", &b);

    printf("Please enter the length of third side: ");
    scanf("%i", &c);

    if (a + b == c && c + a == b && b + c == a)
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("Invalid triangle");
    }
}