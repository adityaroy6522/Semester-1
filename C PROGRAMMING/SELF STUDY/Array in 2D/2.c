#include <stdio.h>
int main ()
{
    int a,b;
    printf ("enter rows ");
    scanf ("%d",&a);
    printf ("enter colmn ");
    scanf ("%d",&b);
    int arr[a][b];
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            printf ("enter element in arr[%d][%d] ",i,j);
            scanf ("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            printf ("%d ",arr[i][j]);
        }
        printf ("\n");
    }
    return 0;
}