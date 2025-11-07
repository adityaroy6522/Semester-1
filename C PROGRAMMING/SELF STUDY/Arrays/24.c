//Ques: Find the total number of pairs in the Array whose sum is equal to the given value x.

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
    int x,count=0;
    printf ("x = ");
    scanf ("%d",&x);
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]+arr[j]==x)
            {
                count++;
                printf ("(%d,%d)",arr[i],arr[j]);
            } 
        }
    }
    printf ("\ntotal number of pair which is equal to %d is %d",x,count);
    return 0;
}