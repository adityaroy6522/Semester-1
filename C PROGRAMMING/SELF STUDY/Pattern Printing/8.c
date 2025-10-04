#include <stdio.h>
int main ()
{
    int n,i;
    printf ("enter number of rows ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (int j=1;j<=2*i-1;j=j+2)
        {
            printf ("%d ",j);
        }
        printf ("\n");
    }
    return 0;
}