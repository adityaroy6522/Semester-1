//*Ques: Find the second largest element in the given array.


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
    int sec=arr[0];
    for (int i=0;i<n;i++)
    {
        if (arr[i]>sec && arr[i]!=max)
        {
            sec=arr[i];
        }
    }
    printf ("second largest number is %d ",sec);
    return 0;
}