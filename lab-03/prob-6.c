#include <stdio.h>

int main() 
{
    int no_of_lines;
    printf("How many lines of the pattern do you want? ");
    scanf("%d", &no_of_lines);

    int series[no_of_lines];

    for (int i = 0; i < no_of_lines; i++)
    {
        series[i] = (2 * i) + 1;
    }

    for (int i = 0; i < no_of_lines; i++)
    {
        for (int j = 0; j < (no_of_lines - (i + 1)); j++)
        {
            printf(" ");
        }

        for (int j = 0; j < series[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}