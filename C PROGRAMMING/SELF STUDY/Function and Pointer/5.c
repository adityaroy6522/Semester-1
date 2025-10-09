#include <stdio.h>
int factorial (int x)
{
    int fact=1;
    for (int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int combination (int n,int r)
{
int fact=factorial(n)/(factorial(r)*factorial(n-r));
return fact;
}

int main ()
{
    int n,r;
    printf ("enter n ");
    scanf ("%d",&n);
    printf ("enter r ");
    scanf ("%d",&r);
    
    int ncr=combination (n,r);
    printf ("%d",ncr);

    return 0;
}