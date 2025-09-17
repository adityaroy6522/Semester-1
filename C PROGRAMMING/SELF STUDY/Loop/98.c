//Print th factorial of a given number n

#include <stdio.h>
int main ()
{
    int n,i,f=1;
    printf ("enter the nth term for factorial ");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf ("%d!=%d",n,f);
    return 0;
}