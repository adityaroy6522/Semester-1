//Ques: Write a program to change the given mxm matrix to its transpose.
//M1
#include <stdio.h>
int main ()
{
    int n;
    printf ("enter number of rows/column ");
    scanf ("%d",&n);
    int arr[n][n];
    printf ("enter all elemnet \n");
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
        for (int j=0;j<n;j++)
        {
            printf ("%d ",arr[j][i]);
        }
        printf ("\n");
    }
    return 0;
}