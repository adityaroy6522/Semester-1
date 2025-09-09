#include <stdio.h>
int main ()
{
    int n,i,a=4;
    printf ("enter ");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        printf ("\n%d",a);
        a=a+3;
    }
    return 0;
}
