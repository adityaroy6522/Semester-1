//Ques: WAP to find a duplicate element from a given array of integers.

#include <stdio.h>
int main ()
{
    int n,count=0,x;
    printf ("enter the size of array ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&arr[i]);
    }
     printf ("duplicate element : ");
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                count=1;
                printf ("%d",arr[i]);
                break;
            }
        }
    }
    if (count==0)
    {
        printf ("none");
    }
    return 0;
}
