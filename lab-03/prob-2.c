#include <stdio.h>

int main() 
{
    int sum = 0, n;
    printf("Enter the upper limit ");
    scanf("%d", &n);
    
    for (int i = 1; i < n; i++)
    {
        if (i % 30 == 0)
        {
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("Sum: %d\n", sum);
    return 0;
}