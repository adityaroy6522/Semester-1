#include <stdio.h>
#include <math.h>
int main ()
{
    int r=2,n,i;
    printf ("enter number of terms you want ");
    scanf ("%d",&n);

    for (i=1;i<=pow(r,n-1);i=i*r)
    {
        printf ("\n%d",i);
    }
    return 0;
}