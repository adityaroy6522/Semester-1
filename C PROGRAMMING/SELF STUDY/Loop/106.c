//print 2^1 2^2 2^3..............2^n

#include <stdio.h>
int main ()
{
    int a=2,b,value=1,i;
    printf ("enter the first n terms you want ");
    scanf ("%d",&b);

    for (i=1;i<=b;i++)
    {
        value = value * a;
        printf ("2^%d=%d ",i,value);
    }
    return 0;
}