//Ques: Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

#include <stdio.h>
int main ()
{
    int n;
    printf ("enter size of array ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter number %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        else
        {
            arr[i]=2*arr[i];
        }
    }
    for (int i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
}