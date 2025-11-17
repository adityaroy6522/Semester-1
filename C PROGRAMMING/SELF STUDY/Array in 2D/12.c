//Ques: Given a matrix having 0-1 only, find the row with the maximum number of 1's.
//M2

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
            scanf ("%d",&arr[i][j]);
            if (arr[i][j] !=0 && arr[i][j] !=1)
            {
                printf ("invalid input! please enter only 0 or 1");
                return 0;
            }
        }
    }
    int maxcount1=0,maxcount0=0,maxrow;
    for (int i=0;i<m;i++)
    {
        int count1=0;
        for (int j=0;j<n;j++)
        {
            if (arr[i][j]==1)
            {
                count1++;
            }
        }
        if (count1>maxcount1)
        {
            maxcount1=count1;
            maxrow=i+1;
        }
    }
    printf ("maximum number of 1's is in row %d",maxrow);
    return 0;
}