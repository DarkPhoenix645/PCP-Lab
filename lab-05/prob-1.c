#include <stdio.h>

int main () {
    // For an mxn matrix
    int m, n;
    printf("Enter space separated values for the no of rows and columns respectively: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of the element at location %dx%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }          
    }
    
    for (int k = 0; k < m; k++)
    {
        printf("|");
        for (int l = 0; l < n; l++)
        {
            printf("%4d", matrix[k][l]);
        }
        printf("|\n");
    }
    
    if (m != n)
    {
        printf("Diagonal does not exist\n");
    }
    else
    {
        int sum = 0;
        int product = 1;
        for (int p = 0; p < m; p++)
        {
            for (int q = 0; q < n; q++)
            {
                if (p == q)
                {
                    sum += matrix[p][q];
                    product *= matrix[p][q];
                }
            }
        }
        printf("Sum: %d, Product: %d\n", sum, product);
    }

    return 0;
}