//print the nth fibonacci number

#include <stdio.h>
int main ()
{
    int n,i,sum=0,a=1,b=1;
    printf ("nth term ");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        if (i==1 || i==2)
    {
        sum=1;
    }
    else
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    }
    printf ("%d",sum);

    return 0;
}