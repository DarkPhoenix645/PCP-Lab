#include <stdio.h>

int main (int argc, char *argv[]) {
    int m, n;
    printf("Enter space separated values for the no of rows and columns respectively: ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n];
    int matrix2[m][n];

    printf("For first matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of the element at location %dx%d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }          
    }

    printf("For second matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of the element at location %dx%d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }          
    }

    printf("Matrix 1 - \n");
    for (int p = 0; p < m; p++)
    {
        printf("|");
        for (int q = 0; q < n; q++)
        {
            printf("%4d", matrix1[p][q]);
        }
        printf("|\n");
    }

    printf("Matrix 2 - \n");
    for (int p = 0; p < m; p++)
    {
        printf("|");
        for (int q = 0; q < n; q++)
        {
            printf("%4d", matrix2[p][q]);
        }
        printf("|\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = matrix1[i][j] + matrix2[i][j];
            matrix1[i][j] = temp;
        }          
    }

    printf("Sum of the matrices - \n");
    for (int p = 0; p < m; p++)
    {
        printf("|");
        for (int q = 0; q < n; q++)
        {
            printf("%4d", matrix1[p][q]);
        }
        printf("|\n");
    }

    return 0;
}