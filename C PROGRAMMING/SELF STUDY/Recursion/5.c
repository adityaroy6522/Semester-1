#include <stdio.h>
void sum (int n,int s)
{
    if (n==0) 
    {
        printf ("%d",s);
        return;
    }
    sum (n-1,s+n);
    return;
}
int main ()
    {
        sum (7,0);
        return 0;
    }