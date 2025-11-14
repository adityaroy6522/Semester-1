//Q. Add two array without using extra array

#include <stdio.h>
void array (int m ,char name [] ,int n,int arr[m][n])
{
for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("%s[%d][%d] ",name,i,j);
            scanf ("%d",&arr[i][j]);
        }
    }
    return;
}
void print_array (int m,int n,int arr[m][n])
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("%d ",arr[i][j]);
        }
        printf ("\n");
    }
    return;
}
int main ()
{
    int m,n,a,b;
    printf ("enter rows of arr ");
    scanf ("%d",&m);
    printf ("enter column of arr ");
    scanf ("%d",&n);
    printf ("enter rows of brr ");
    scanf ("%d",&a);
    printf ("enter column of brr ");
    scanf ("%d",&b);
    if (a!=m || b!=n)
    {
        printf ("matrix addation not possible ");
    }
    else
    {
    int arr[m][n],brr[a][b];
    array (m,"arr",n,arr);
    array (a,"brr",b,brr);
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<b;j++)
        {
            arr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    print_array (m,n,arr);
    }
    return 0;
}