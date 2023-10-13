#include <stdio.h>

int main (int argc, char *argv[]) {
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

    int max = matrix[0][0];
    int min = matrix[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            max = matrix[i][j] > max ? matrix[i][j] : max;
            min = matrix[i][j] < min ? matrix[i][j] : min;
        }          
    }

    printf("Max value: %d, Min value: %d\n", max, min);
    return 0;
}