#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    if (argc != 2)
    {
        printf("Invalid usage, please use the format\n");
        printf("./prob-4 <input-string>\n");
    }
    else
    {
        char *input = argv[1];

        printf("Original string: %s\n", input);
        printf("Reversed string: ");
        for (int i = strlen(input) - 1; i >= 0; i--)
        {
            printf("%c", *(input + i));
        }

        printf("\n");
    }

    return 0;
}