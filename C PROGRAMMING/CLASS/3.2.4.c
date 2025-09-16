#include <stdio.h>
int main ()
{
    double p=100000,rate=0.1,i,n=10;
    for (i=1;i<=n;i++)
    {
        p=p*(1+rate);
        printf ("\n%0.0f",p);

    }
}