#include <stdio.h>

int main() {
    int rows, i, j, space, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
        {                                                                    // Print spaces for formatting
        for (space = 1; space <= rows - i; space++) 
        {
            printf("  ");
        }
        num = 1;                                                            // first number in every row is 1
        for (j = 0; j <= i; j++) 
        {
            printf("%4d", num);                                                                      // Calculate next value using nCr relation
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}