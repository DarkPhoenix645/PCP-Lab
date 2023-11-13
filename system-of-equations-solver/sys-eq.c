// Implementing Gaussian Elimination programmatically

#include <stdio.h>
#include <stdlib.h>

void printMatrix(double **matrix, int m, int n);

int main (int argc, char *argv[]) {
    // Input sanitisation
    if (argc < 2) { 
        printf("Invalid usage\n");
        printf("Please use the following format:\n");
        printf("\n\t./sys-eq <number of equations in the system>\n");
        printf("\tThe number of equations must be >= 2\n");
        return 1; 
    }
    else
    {
        int order = atoi(argv[1]);
        
        if (order <= 1)
        {
            printf("Invalid usage\n");
            printf("Please use the following format:\n");
            printf("\n\t./sys-eq <number of equations in the system>\n");
            printf("\tThe number of equations must be >= 2\n");
            return 1;
        }

        // Declare and allocate space for augmented matrix
        double **A;
        // A has order number of rows and order + 1 number of column
        // As such, in the first malloc call, the rows are allocated and 
        // in the second malloc call, the columns are allocated
        A = malloc(order * sizeof(*A));
        for (int i = 0; i < order; i++)
        {
            A[i] = malloc((order + 1) * sizeof *A[i]);
        }

        for (int i = 0; i < order; i++)
        {
            for (int j = 0; j < order + 1; j++)
            {
                printf("Enter the value at A[%d][%d]: ", i, j);
                scanf("%lf", &A[i][j]);
            }
        }
        
        printf("You have entered the following augmented matrix:\n");
        printMatrix(A, order, order + 1);

        // Forming the Echelon Form of the matrix
        for (int i = 0; i < order; i++)
        {
            double r;
            if (A[i][i] == 0) { continue; }
            for (int j = 0; j < order; j++)
            {
                if (i != j) { 
                    r = A[j][i] / A[i][i]; 
                    for (int k = 0; k < order + 1; k++)
                    {
                        A[j][k] -= r * A[i][k];
                    }   
                }
            }
        }

        printf("\n Echelon Form of the matrix: \n");
        printMatrix(A, order, order + 1);

        // X is the order-dimensional unknown vector
        // Allocate space for the unknown vector
        double **X;
        // X has order number of rows and one column
        // As such, in the first malloc call, the rows are allocated and 
        // in the second malloc call, the columns are allocated 
        X = malloc(order * sizeof(*X));
        for (int i = 0; i < order; i++)
        {
            X[i] = malloc(1 * sizeof *X[i]);
        }

        // Forming the solution
        for (int i = 0; i < order; i++)
        {
            X[i][0] = A[i][order] / A[i][i];
        }
        
        printf("\n The solution vector for given augmented matrix is as follows: \n");
        printMatrix(X, order, 1);

        // Deallocate memory allocated for X and A
        for (int i = 0; i < order; i++)
        {
            free(X[i]);
        }
        free(X);

        for (int i = 0; i < order; i++)
        {
            free(A[i]);
        }
        free(A);
    }
    return 0;
}

void printMatrix(double **matrix, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf("%8.3lf", matrix[i][j]);
        }
        printf("|\n");
    }
}