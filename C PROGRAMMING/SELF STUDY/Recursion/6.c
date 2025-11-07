#include <stdio.h>
int sum (int n)
{
    if (n==0) return 0;
    return n+sum(n-1);
}
int main ()
    {
        sum (7);
        printf ("%d",sum(7));
        return 0;
    }