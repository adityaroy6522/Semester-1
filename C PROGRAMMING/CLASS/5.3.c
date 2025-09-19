#include <stdio.h>

int main() 
{
    int n, i, num, count = 0;

    // Input size of array
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Number to search
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    // Count frequency
    for (i = 0; i < n; i++) 
    {
        if (arr[i] == num) 
        {
            count++;
        }
    }

    // Display result
    if (count == 0)
        printf("The number %d does not exist in the array.\n", num);
    else
        printf("The frequency of %d is: %d\n", num, count);

    return 0;
}
