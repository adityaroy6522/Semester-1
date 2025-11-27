//Ques: Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include <stdio.h>
#include <stdbool.h>
int main ()
{
    int n;
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
        bool flag = false;

        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf ("%d",arr[i]);
            break;
        }
    }
    return 0;
} 