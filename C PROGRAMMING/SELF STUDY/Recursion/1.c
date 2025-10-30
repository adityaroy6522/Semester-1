#include <stdio.h>
int factorial (int n)
{
    int a=1;
    for (int i=1;i<=n;i++)
    {
        a=a*i;
    }
    return a;
}
int main ()
{
    int n;
    scanf ("%d",&n);
    int a = factorial (n);
    printf ("%d",a);
    return 0;
}