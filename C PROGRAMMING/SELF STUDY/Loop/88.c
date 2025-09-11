#include <stdio.h>
#include <math.h>
int main ()
{
    int n,sum=0,ld=0;
    printf ("enter the number ");
    scanf ("%d",&n); 

    while (n!=0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf ("%d",sum);
    return 0;
}