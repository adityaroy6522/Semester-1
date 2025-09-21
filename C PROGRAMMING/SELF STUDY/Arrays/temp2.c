#include <stdio.h>

int main() 
{
    int n, result;

    printf("Enter number of integers (n): ");
    result = scanf("%d", &n);

    if (result != 1 || n <= 0) 
    {
        printf("Invalid input. n must be a positive integer.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++) 
    {
        result = scanf("%d", &arr[i]);
        if (result != 1) 
        {
            printf("Invalid input. Please enter integers only.\n");   
            return 0;
        }
    }

    int key;
    printf("Enter the number to search: ");
    result = scanf("%d", &key);

    if (result != 1) 
    {
        printf("Invalid input.\n");
        return 0;
    }

    int found = 0;

    for (int i = 0; i < n; i++) 
    {
        found = (arr[i] == key) ? 1 : found;
    }
    printf("%s\n", found ? "Found" : "Not Found");
    return 0;
}
