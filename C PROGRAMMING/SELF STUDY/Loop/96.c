#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    printf ("enter nth term ");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            sum=sum-i;
        }
        else 
        {
            sum=sum+i;
        }
    }
    printf ("sum= %d",sum);
    return 0;

}