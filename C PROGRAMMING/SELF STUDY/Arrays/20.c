//Homework: Find the minimum value out of all the elements in the array.


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
    int min = arr[0];
    for (int i=0;i<n;i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf ("the minimnum number is array is %d",min);
    return 0;
}