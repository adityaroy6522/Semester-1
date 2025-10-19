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

    
    int largest = arr[0];
    int second_largest = 0; 

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

    if (second_largest == 0) 
    {
        printf("There is no second largest element.\n");
    } 
    else 
    {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}
