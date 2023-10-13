#include <stdio.h>

int main (int argc, char *argv[]) {
    int m, n;
    printf("Enter space separated values for the no of rows and columns respectively: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int transpose[n][m];

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
        for (int l = 0; l < n; l++)
        {
            transpose[l][k] = matrix[k][l];
        }
    }

    printf("Original matrix - \n");
    for (int p = 0; p < m; p++)
    {
        printf("|");
        for (int q = 0; q < n; q++)
        {
            printf("%4d", matrix[p][q]);
        }
        printf("|\n");
    }

    printf("\n");
    printf("Transpose of the matrix - \n");
    for (int r = 0; r < n; r++)
    {
        printf("|");
        for (int s = 0; s < m; s++)
        {
            printf("%4d", transpose[r][s]);
        }
        printf("|\n");
    }

    return 0;
}