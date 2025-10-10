#include <stdio.h>

// Recursive function to find GCD
int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1; // base case: when second number becomes 0
    else
        return GCD(num2, num1 % num2); // recursive case
}

int main() 
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a; // handle negative numbers
    if (b < 0) b = -b;

    printf("GCD of %d and %d is: %d\n", a, b, GCD(a, b));

    return 0;
}