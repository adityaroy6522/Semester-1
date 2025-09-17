#include <stdio.h>
int main ()
{
    int n,i;
    printf ("enter nth term ");
    scanf ("%d",&n);

    if (n%2==0)
    {
        n=-n/2;
    }
    else 
    {
        n=-n/2+n;
    }
    printf ("sum= %d",n);
    return 0;
}