#include <stdio.h>
int main() 
{
    int arr[10],result;

    printf("Enter 10 integers (0-9):\n");

    for (int i = 0; i < 10; i++) 
    {
        result = scanf("%d", &arr[i]);

        if (result != 1 || arr[i] < 0 || arr[i] > 9) 
        {
            printf("Invalid input. Please enter integers in range 0–9.\n");
        }
    }
    int freq[10] = {0};

    for (int i = 0; i < 10; i++) 
    {
        switch (arr[i]) 
        {
            case 0: freq[0]++; break;
            case 1: freq[1]++; break;
            case 2: freq[2]++; break;
            case 3: freq[3]++; break;
            case 4: freq[4]++; break;
            case 5: freq[5]++; break;
            case 6: freq[6]++; break;
            case 7: freq[7]++; break;
            case 8: freq[8]++; break;
            case 9: freq[9]++; break;
        }
    }
    printf("\nDigit frequencies:\n");

    for (int i = 0; i < 10; i++) 
    {
        printf("%d: %d\n", i, freq[i]);
    }

    return 0;
}
