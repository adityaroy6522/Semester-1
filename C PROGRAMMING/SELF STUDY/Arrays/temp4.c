#include <stdio.h>

int main() {
    int A[3][3], B[3][3];
    int i, j, k;

    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    int sum[3][3];
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatrix Addition:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    int diff[3][3];
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            diff[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("\nMatrix Subtraction:\n");

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    int prod[3][3] = {0};
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            for (k = 0; k < 3; k++) 
            {
                prod[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix Multiplication:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}