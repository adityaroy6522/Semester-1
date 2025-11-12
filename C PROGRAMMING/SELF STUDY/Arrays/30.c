//Homework: If an array arr contains n elements, then check if the given array is a palindrome or not.

#include <stdio.h>
int main ()
{
    int n;
    printf ("enter size of array ");
    scanf ("%d",&n);
    int arr[n],brr[n],pal=1;
    for (int i=0;i<n;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        brr[n-1-i]=arr[i];
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]!=brr[i])
        {
            pal=0;
            break;
        }
    }
    if (pal==1)
    {
        printf ("palendrome");
    }
    else
    {
        printf ("not a palendrome");
    }
    return 0;
}