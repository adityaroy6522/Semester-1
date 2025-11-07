//Ques: Count the number of elements in given array greater than a given number X.

#include <stdio.h>
int main ()
{
    int n;
    printf ("enter the size of array ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter number %d ",i+1);
        scanf ("%d",&arr[i]);
    }

    int x;
    int count =0;
    printf ("enter a number ");
    scanf ("%d",&x);

    for (int i=0;i<n;i++)
    {
        if (arr[i]>x)
        {
            count++;
        } 
    }
    printf ("%d",count);
    return 0;
}