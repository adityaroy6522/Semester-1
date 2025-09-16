#include <stdio.h>

int main() 
{
    int rows, i, j, num, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) 
    {                                                      // print leading spaces for pyramid shape
        for (space = 1; space <= rows - i; space++) 
        {
            printf(" ");
        }

        num = 1;                                           // first number of each row is always 1
        for (j = 0; j <= i; j++) 
        {
            printf("%d ", num);                                // print number with a space
            num = num * (i - j) / (j + 1);                               // formula for nCr
        }
        printf("\n"); // move to
    }
}   