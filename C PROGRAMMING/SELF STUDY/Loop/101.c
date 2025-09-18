//print the nth fibonacci number
//M2

#include <stdio.h>
int main ()
{
    int n,i,sum=1,a=1,b=1;
    printf ("nth term ");
    scanf ("%d",&n);

    for (i=1;i<=n-2;i++)  //<-------------
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf ("%d",sum);

    return 0;
}