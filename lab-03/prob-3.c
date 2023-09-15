#include <stdio.h>

int main() 
{
    int no_of_lines;
    printf("How many lines of the pattern do you want? ");
    scanf("%d", &no_of_lines);
    
    for (int i = no_of_lines; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}