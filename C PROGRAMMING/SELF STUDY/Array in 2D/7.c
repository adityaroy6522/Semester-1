//Ques: Find the sum of a given matrix of n x m.

#include <stdio.h>
int main ()
{
    int a,b,sum=0;
    printf ("enter number of rows ");
    scanf ("%d",&a);
    printf ("enter number of columb ");
    scanf ("%d",&b);
    int arr [a][b];
    printf ("enter all element \n ");
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf ("\n sum = %d",sum);
    return 0;
}