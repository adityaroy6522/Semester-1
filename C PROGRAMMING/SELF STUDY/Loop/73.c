#include <stdio.h>
int main ()
{
    int a=3,n,i;
    printf ("enter number of term you want ");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        printf ("\n%d",a);
        a=a*4;
    }
    return 0;
}