//Ques: Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include <stdio.h>
int main ()
{
    int n;
    printf ("size of array ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter number %d ",i+1);
        scanf ("%d",&arr[i]);
    }

    int even=0;
    int odd=0;

    for (int i=0;i<n;i++)
    {
        if (i%2==0)
        {
            even=even+arr[i];
        }
        else 
        {
            odd=odd+arr[i];
        }
    }    
    printf ("even(%d) - odd(%d) = %d",even,odd,even-odd);
    return 0;
}