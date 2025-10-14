#include <stdio.h>
int main ()
{
    int i,n,arr[n];
    printf ("enter the size of array ");
    scanf ("%d",&n);
    for (i=0;i<=n-1;i++)
    {
        printf ("enter element number %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<=n;i++)
    {
        printf ("%d  ",arr[i]); 
    }

    return 0;
}