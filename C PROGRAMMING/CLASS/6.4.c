#include <stdio.h>
#include <math.h>

int ISPRIME(int num);

int main() 
{
    int start, end;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);

    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("\nThe prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) 
    {
        if (ISPRIME(i)) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

int ISPRIME(int num) 
{
    if (num <= 1) 
    {
        return 0;
    }
    if (num == 2) 
    {
        return 1;
    }
    if (num % 2 == 0) 
    {
        return 0;
    }
    int limit = num / 2;
    for (int i = 3; i <= limit; i += 2) 
    {
        if (num % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}