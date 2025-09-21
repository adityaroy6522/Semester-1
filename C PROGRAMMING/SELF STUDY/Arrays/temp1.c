#include <stdio.h>

int main () 
{
    int n,result;
    printf("Enter number of integers (n): ");
    result = scanf("%d", &n);

    if (result != 1 || n <= 0) 
    {
        printf("Invalid input. n must be a positive integer.\n");
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        result = scanf("%d", &arr[i]);
        if (result != 1) 
        {
            printf("Invalid input. Please enter integers only.\n");
        }
    }

    int largest = arr[0];
    int smallest = arr[0];
    int even_count = 0;
    int odd_count = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            largest = arr[i];
        }
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        }
        if (arr[i] % 2 == 0) 
        {
            even_count++;
        } 
        else 
        {
            odd_count++;
        }
        sum += arr[i];
    }
    double average = (double) sum / n;

    printf("\nResults:\n");
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("Average: %.2f\n", average);
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);

    return 0;
}
