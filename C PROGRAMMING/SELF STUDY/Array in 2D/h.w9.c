//HW: Given a matrix 'a' of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

#include <stdio.h>
int main ()
{
    int m,n,l1,l2,r1,r2,sum=0;
    printf ("enter number of rows ");
    scanf ("%d",&m);
    printf ("enter number of column ");
    scanf ("%d",&n);
    printf ("enter r1 ");
    scanf ("%d",&r1);
    printf ("enter r2 ");
    scanf ("%d",&r2);
    printf ("enter l1 ");
    scanf ("%d",&l1);
    printf ("enter l2 ");
    scanf ("%d",&l2);
    
    int arr[m][n];
    printf ("enter all element ");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    
    if (r1>=0 || r1<=m || l1>=0 || l2<=n) 
    {
        for (int i=r1;i<=r2;i++)
        {
            for (int j=l1;j<=l2;j++)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    else
    {
        printf ("not possible ");
    }

    printf ("sum = %d",sum);

    return 0;
}