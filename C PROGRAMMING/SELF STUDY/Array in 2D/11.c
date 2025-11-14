//Ques: Given a matrix having 0-1 only, find the row with the maximum number of 1's.


#include <stdio.h>
int main ()
{
    int m,n;
    printf ("enter number of rows ");
    scanf ("$%d",&m);
    printf ("enter number of column ");
    scanf ("$%d",&n);
    int arr[m][n];
    printf ("enter all element\n");
    for (int i=0;i,m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    
    

    return 0;
}