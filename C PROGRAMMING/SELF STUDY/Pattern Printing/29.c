#include <stdio.h>
int main ()
{
    int n;
    printf ("enter number of rows ");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            printf (" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf ("%d",j);
        }
        int a=i-1;
        for (int j=1;j<=i-1;j++)
        {
            printf ("%d",a);
            a--;
        }
        printf ("\n");
    }
}