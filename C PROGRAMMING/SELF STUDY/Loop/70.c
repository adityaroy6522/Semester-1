#include <stdio.h>
int main ()
{
    int n,i,a=1;
    printf ("enter number of terms ");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        printf ("\n%d",a);
        a=a*2;
    }
    return 0;
}