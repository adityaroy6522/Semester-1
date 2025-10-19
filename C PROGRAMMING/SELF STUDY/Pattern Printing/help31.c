#include <stdio.h>
int main ()
{
    int n;
    int a=3;
    printf ("enter the numbr of rows ");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            printf ("#");
        }
        for (int j=1;j<=i;j++)
        {
            printf ("%d",j);
        }
        for (int j=1;j<=i-1;j++)
        {
            printf ("%d",a);
            a++;
        }
        printf ("\n");
    }
}