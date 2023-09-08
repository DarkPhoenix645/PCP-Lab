#include <stdio.h>

int main() 
{
    int a;
    printf("Please enter a number: ");
    scanf("%i", &a);
    
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0) 
        { 
            printf("Composite number\n"); 
            return 0;
        }
    }

    printf("Prime number\n");
}