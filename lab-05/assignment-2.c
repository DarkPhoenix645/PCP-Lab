#include <stdio.h>

int main (int argc, char *argv[]) {
    int a, b, c, d;
    printf("Enter space separated values for the no of rows and columns of first matrix respectively: ");
    scanf("%d %d", &a, &b);

    printf("Enter space separated values for the no of rows and columns of second matrix respectively: ");
    scanf("%d %d", &c, &d);

    if (b != c)
    {
        printf("Invalid matrices\n");
        return 1;
    }
    
    int matrix1[a][b];
    int matrix2[c][d];
    int product[a][d];

    printf("For first matrix\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the value of the element at location %dx%d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }          
    }

    printf("For second matrix\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("Enter the value of the element at location %dx%d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }          
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            product[i][j] = 0;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            for (int k = 0; k < b; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }          
    }

    printf("Matrix 1 - \n");
    for (int p = 0; p < a; p++)
    {
        printf("|");
        for (int q = 0; q < b; q++)
        {
            printf("%4d", matrix1[p][q]);
        }
        printf("|\n");
    }

    printf("Matrix 2 - \n");
    for (int p = 0; p < c; p++)
    {
        printf("|");
        for (int q = 0; q < d; q++)
        {
            printf("%4d", matrix2[p][q]);
        }
        printf("|\n");
    }

    printf("Product of the matrices - \n");
    for (int p = 0; p < a; p++)
    {
        printf("|");
        for (int q = 0; q < d; q++)
        {
            printf("%4d", product[p][q]);
        }
        printf("|\n");
    }

    return 0;
}