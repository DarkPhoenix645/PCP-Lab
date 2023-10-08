#include <stdio.h>

int main() 
{
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input\n");
        return 1;
    }

    int fib[n];
    fib[0] = 1;
    fib[1] = 1;
    
    if (n == 1)
    {
        printf("%d %d\n", fib[0], fib[1]);
        return 0;
    }
    else
    {
        printf("%d %d ", fib[0], fib[1]);

        for (int i = 1; fib[i] + fib[i - 1] < n; i++)
        {
            fib[i + 1] = fib[i] + fib[i - 1];
            printf("%d ", fib[i + 1]);
        }
        
        printf("\n");

        return 0;
    }
}