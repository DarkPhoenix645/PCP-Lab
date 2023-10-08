#include <stdio.h>

int pattern1(int lines);
int pattern2(int lines);
int pattern3(int lines);
int pattern4(int lines);
int pattern5(int lines);
int pattern6(int lines);
int pattern7(int lines);
int pattern8(int lines);
int factorial(int n);

int main () {
    int lines;

    printf("Please enter the number of lines required for each pattern: ");
    scanf("%d", &lines);

    pattern1(lines);
    pattern2(lines);
    pattern3(lines);
    pattern4(lines);
    pattern5(lines);
    pattern6(lines);
    pattern7(lines);
    pattern8(lines);
    
    return 0;
}

int pattern1(int lines) 
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    printf("\n");
}

int pattern2(int lines) 
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", i + 1);
        }
        printf("\n");
    }


    printf("\n");
}

int pattern3(int lines) 
{
    for (int i = lines; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
}

int pattern4(int lines) 
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < (lines - (i + 1)); j++)
        {
            printf("  ");
        }

        for (int j = 0; j < i + 1; j++)
        {
            printf("%2d", j + 1);
        }
        printf("\n");
    }

    printf("\n");
}

int pattern5(int lines) 
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%c ", 65 + j);
        }
        printf("\n");
    }

    printf("\n");
}

int pattern6(int lines) 
{
    int series[lines];

    for (int i = 0; i < lines; i++)
    {
        series[i] = (2 * i) + 1;
    }

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < (lines - (i + 1)); j++)
        {
            printf(" ");
        }

        for (int j = 0; j < series[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n");
}

int pattern7(int lines) 
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = lines - (i + 1); j > 0; j--)
        {
            printf("  ");
        }

        for (int k = i + 1; k > 0; k--)
        {
            printf("%2d", k - 1);
        }

        for (int l = 1; l < i + 1; l++)
        {
            printf("%2d", l);
        }

        printf("\n");
    }

    printf("\n");
}

int pattern8(int lines) 
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < lines - (i + 1); j++)
        {
            printf("  ");
        }

        int c = 1;

        for (int k = 0; k <= i; k++)
        {
            c = factorial(i) / (factorial(k) * factorial(i - k));
            printf("%4d", c);
        }

        printf("\n");
    }
    
}

int factorial(int n)
{
    int out = 1;
    while (n > 0)
    {
        out *= n;
        n -= 1;
    }

    return out;
}