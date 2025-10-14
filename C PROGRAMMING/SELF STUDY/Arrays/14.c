//Homework: Find the minimum value out of all the elements in the array.

#include <stdio.h>
int main ()
{
    int i,arr[5];
    int max=arr[0];
    for (i=0;i<=4;i++)
    {
        printf ("enter element number %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<=4;i++)
    {
        if (max>arr[i])
        {
            max=arr[i];
        }
    }
    printf ("%d",max);
    return 0;
}