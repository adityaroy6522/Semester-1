#include <stdio.h>

int main() 
{
    int matrix[4][4];
    int i, j;

    printf("Enter elements of the 4x4 matrix:\n");
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMaximum element in each row:\n");
    for (i = 0; i < 4; i++) 
    {
        int max_row = matrix[i][0];
        for (j = 1; j < 4; j++) 
        {
            if (matrix[i][j] > max_row) 
            {
                max_row = matrix[i][j];
            }
        }
        printf("Row %d: %d\n", i + 1, max_row);
    }

    printf("\nMaximum element in each column:\n");
    for (j = 0; j < 4; j++) 
    {
        int max_col = matrix[0][j];
        for (i = 1; i < 4; i++) 
        {
            if (matrix[i][j] > max_col) {
                max_col = matrix[i][j];
            }
        }
        printf("Column %d: %d\n", j + 1, max_col);
    }
    return 0;
}
