#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest
    int largest = arr[0];
    int second_largest = -2147483648; // minimum value of int

    for (i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) 
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == -2147483648) 
    {
        printf("There is no second largest element.\n");
    } else 
    {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}
