#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) 
{
    if (argc != 2)
    {
        printf("Invalid usage, please use the format\n");
        printf("./prob-5 <input-string>\n");
    }
    else
    {
        char *input = argv[1];

        // strlen() demo
        printf("Input string: %s\n", input);
        printf("Length of string: %d", strlen(input));

        // strcpy() demo
        char *str1;
        strcpy(str1, input);
        printf("Original string: %s, copied string: %s", input, str1);

        // strncpy() demo
        char str2[10];
        memset(str2, '\0', sizeof(str2));
        strncpy(str2, input, 8);

        // strcmp() demo
        char *str3 = "sample-string";
        int result = strcmp(str3, input);

        if (result < 0)
        {
            printf("The string %s occurs before input alphabetically.", str3);
        }
        else if (result > 0)
        {
            printf("The string %s occurs before input alphabetically.", input);
        }
        else
        {
            printf("The strings are identical.");
        }

        // strchr() demo
        char c = 'e';
        char *result1 = strchr(input, c);

        if (result1 != NULL)
        {
            printf("The first occurrence of character %c is at memory address %p", result1, &result1);
        }
        else
        {
            printf("Character not found in string");
        }

        // strchr() demo
        char *result2 = strchr(input, c);

        if (result2 != NULL)
        {
            printf("The last occurrence of character %c is at memory address %p", result2, &result2);
        }
        else
        {
            printf("Character not found in string");
        }
    }
    return 0;
}