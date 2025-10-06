#include <stdio.h>
int main ()
{
    int n,a=1;
    printf ("enter number of rows ");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int k=1;k<=n-i;k++)
        {
            printf (" ");
        }
        for (int j=1;j<=a;j++)
        {
            printf ("*");
        }
        a=a+2;
        printf ("\n");
    } 
    return 0;
}