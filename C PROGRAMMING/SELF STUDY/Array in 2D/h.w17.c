//Ques: Write a program to rotate a matrix 90°
//clockwise. (Leetcode - 48)

#include <stdio.h>
int main ()
{
    int n;
    printf ("enter number of column ");
    scanf ("%d",&n);
    int arr[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    printf ("\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<i;j++)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    int brr[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            brr[i][j]=arr[i][n-1-j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("%d ",brr[i][j]);
        }
        printf ("\n");
    }
    return 0;
}