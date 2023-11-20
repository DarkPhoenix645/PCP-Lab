#include <stdio.h>

int prime(int n, int m);

int main () {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int res = prime(x, 2);
    if (res == 0) { printf("Not prime"); return 0; }
    printf("Prime");

    return 0;
}

int prime(int n, int m)
{
    if (n <= 1) { return 0; }
    if (n == m) { return 1; }
    if (n % m == 0) { return 0; }

    return prime(n, m + 1);
}