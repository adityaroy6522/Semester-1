//print the nth fibonacci number
//M3

#include <stdio.h>
int main ()
{
    int n,i,sum=1,a=1,b=1;
    printf ("nth term ");
    scanf ("%d",&n);

    for (i=2;i<=n;i++)  //<-------------
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf ("%d",sum);

    return 0;
}