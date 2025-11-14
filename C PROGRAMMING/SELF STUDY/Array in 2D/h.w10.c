//Homework : Write a program to print the row number having the maximum sum in a given matrix.

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
            printf ("arr[%d][%d] ",i,j);
            scanf ("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<m;i++)
    {
        int sum=0;
        for (int j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
        }
        printf ("sum of row %d is %d\n",i+1,sum);
    
    }
    return 0;
}