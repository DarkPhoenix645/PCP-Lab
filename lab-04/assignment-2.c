#include <stdio.h>

int main (int argc, char **argv) {
    if (argc != 2)
    {
        printf("Invalid usage, please use the format\n");
        printf("./assignment-2 <input-string>\n");
    }
    else
    {
        char *input = argv[1];

        while (*input)
        {
            printf("ASCII for %c: %d\n", *input, *input);
            input++;
        }
    }

    return 0;
}