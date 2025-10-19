#include <stdio.h>

int main() 
{
    int m, n, p, q;
    int i, j, k;

   
    printf("Enter number of rows and columns for Matrix A: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter elements of Matrix A (row-wise):\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Enter number of rows and columns for Matrix B: ");
    scanf("%d %d", &p, &q);

    int B[p][q];

    printf("Enter elements of Matrix B (row-wise):\n");
    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    
    if (n != p) 
    {
        printf("\nMatrix multiplication NOT possible!");
        printf("\nNumber of columns of A (%d) != Number of rows of B (%d)\n", n, p);
        return 0;
    }

    int C[m][q]; 
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            C[i][j] = 0;
        }
    }

   
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            for (k = 0; k < n; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }

    
    printf("\nResultant Matrix C (A x B):\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
