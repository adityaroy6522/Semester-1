#include <stdio.h>

int FACT_recursive(int num) 
{
    if (num == 0)
    return 1;
    
    else
        return num * FACT_recursive(num - 1);
}
int main() 
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
    printf("\n--- Factorial Calculation ---\n");
    printf("Using Recursive Function: %d! = %d\n", n, FACT_recursive(n));
    }
    return 0;
}