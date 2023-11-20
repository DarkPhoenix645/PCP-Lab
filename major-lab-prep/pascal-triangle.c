#include <stdio.h>

int comb(int n, int r);
int fact(int n);

int main () {
    int x;
    printf("How many lines of the Pascal Triangle would you like: ");
    scanf("%d", &x);
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i; j++)
        {
            printf("  ");
        }

        for (int k = 0; k < i + 1; k++)
        {
            printf("%4d", comb(i, k));
        }
        
        printf("\n");
    }
    
    return 0;
}

int comb(int n, int r)
{
    int val = fact(n) / (fact(r) * fact(n - r));
    return val;
}

int fact(int n)
{
    if (n <= 1) { return 1; }
    return n * fact(n - 1);
}