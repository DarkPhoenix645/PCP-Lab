#include <stdio.h>

int main() 
{
    int no_of_lines;
    printf("How many lines of the pattern do you want? ");
    scanf("%d", &no_of_lines);
    
    for (int i = 0; i < no_of_lines; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%c ", 65 + j);
        }
        printf("\n");
    }

    return 0;
}