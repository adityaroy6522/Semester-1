//print first n fibonacci number 

#include <stdio.h>
int main ()
{
    int n,i,sum=1,a=1,b=1;
    printf ("enter nth term ");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        if (i==1 || i==2)
        {
            sum=1;
            printf ("%d ",sum);
        }
        else
        {
        sum=a+b;
        a=b;
        b=sum;
        printf ("%d ",sum);
        }
    }
    return 0;
}