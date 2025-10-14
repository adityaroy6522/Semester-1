//Ques: Find the maximum value out of all the elements in the array.

#include <stdio.h>
int main ()
{
    int i,arr [8];
    int max = arr[0];
    for (i=0;i<=7;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<=7;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    printf ("%d",max);
    return 0;
}