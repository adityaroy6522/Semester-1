//Q. given array, and a number 'x'. find out if 'x' lies in the array or not if yes then print the index.


#include <stdio.h>
int main ()
{
    int n,x,found=0;
    printf ("enter the size of array ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    printf ("enter the number you want to search ");
    scanf ("%d",&x);
    for (int i=0;i<n;i++)
    {
        if (x==arr[i])
        {
            printf (" %d is present at index %d",x,i);
            found=1;
        }
    }
    if (found == 0)
    {
        printf (" %d is present ",x);
    }
    return 0;
}