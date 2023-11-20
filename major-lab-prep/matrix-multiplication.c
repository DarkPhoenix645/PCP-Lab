#include <stdio.h>
#include <stdlib.h>

typedef char* string;

void input(int **matrix, string message);
void print(int **matrix, string message);

int main () {
    int **matrix1;
    int **matrix2;
    int **product;

    matrix1 = malloc(3 * sizeof(*matrix1));
    matrix2 = malloc(3 * sizeof(*matrix2));
    product = malloc(3 * sizeof(*product));
    
    for (int i = 0; i < 3; i++)
    {
        matrix1[i] = malloc(3 * sizeof(*matrix1[i]));
        matrix2[i] = malloc(3 * sizeof(*matrix2[i]));
        product[i] = malloc(3 * sizeof(*product[i]));
    }

    input(matrix1, "Input first matrix:");
    input(matrix2, "Input second matrix:");

    print(matrix1, "First matrix:");
    print(matrix2, "Second matrix:");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        { 
            product[i][j] = 0; 
            for (int k = 0; k < 3; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }   
        }
    }

    print(product, "Resultant matrix:");

    for (int i = 0; i < 3; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(product[i]);
    }
    
    free(matrix1);
    free(matrix2);
    free(product);
    return 0;
}

void input(int **matrix, string message)
{
    printf("%s\n", message);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element at %dx%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }   
}

void print(int **matrix, string message)
{
    printf("%s\n", message);   
    for (int i = 0; i < 3; i++)
    {
        printf("|");
        for (int j = 0; j < 3; j++)
        {
            printf("%6d", matrix[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}