//Q. find out the max and min element in a 2D array and the index of max and min element

#include <stdio.h>
int main ()
{
    int m,n;
    printf ("enter number of rows ");
    scanf ("%d",&m);
    printf ("enter number of column ");
    scanf ("%d",&n);
    int arr[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("arr[%d][%d]",i,j);
            scanf ("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    int min=arr[0][0];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf ("max = %d\n",max);
    printf ("min = %d",min); 

}