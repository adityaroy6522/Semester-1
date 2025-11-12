//Ques: Write a program to copy the contents of one array into another in the reverse order.

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
    for (int i=0;i<n;i++)
    {
        brr[i]=arr[n-1-i];
    }
    for (int i=0;i<n;i++)
    {
        printf ("%d ",brr[i]);
    }
    return 0;
}