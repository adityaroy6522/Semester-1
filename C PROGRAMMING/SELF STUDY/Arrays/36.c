//Ques: Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include <stdio.h>
int main ()
{
    int n,check=0;
    printf ("enter the size of array ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    printf ("non deuplicate number : ");
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                printf ("%d ",arr[i]);
                check=1;
                break;
            }
        }
    }
    if (check == 0)
    {
        printf ("none");
    }

    return 0;
} 