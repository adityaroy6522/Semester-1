//Ques: Write a program to Print the transpose of the matrix entered by the user and store it in diffrent matrix. (Leetcode - 867)

#include <stdio.h>
int main ()
{
    int m,n;
    printf ("enter number of rows ");
    scanf ("%d",&m);
    printf ("enter number of  column ");
    scanf ("%d",&n);
    int arr[m][n];
    printf ("enter all element \n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    printf ("\n");
    int brr[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            brr[i][j]=arr[j][i];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf ("%d ",brr[i][j]);
        }
        printf ("\n");
    }
    return 0;
}