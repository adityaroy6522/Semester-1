#include <stdio.h>
int main ()
{
    int n;
    printf ("enter size of array ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    int max=arr[0];
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf ("the largest number in the array is %d",max);
    return 0;
}