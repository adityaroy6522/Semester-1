//Ques: Rotate the given array 'a' by k steps, where k is non-negative.
//Note: k can be greater than n as well where n is the size of array 'a'.

#include <stdio.h>
int main ()
{
    int n;
    printf ("enter size of array ");
    scanf ("%d",&n);
    int arr[n],brr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    int k;
    printf ("enter number of rotation ");
    scanf ("%d",&k);
    if (k>n)
    {
        k=k%n;
    }
    for (int i=0;i<k;i++)
    {
        brr[i]=arr[n-1-i];
    }
    for (int i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
}