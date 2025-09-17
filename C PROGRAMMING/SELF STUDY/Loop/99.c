//print the factorials of tirst n numbers

#include <stdio.h>
int main ()
{
    int n,i,f=1;
    printf ("nth term for factorial ");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        f=f*i;
        printf ("\n%d!=%d",i,f);
    }

    return 0;
}