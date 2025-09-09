#include <stdio.h>
int main ()
{
    int i,n;
    printf ("enter the number you want table of ");
    scanf ("%d",&n);
    for (i=1;i<=10;i++)
    {
    printf ("\n %d x %d =%d",n,i,i*n);
    }
    return 0;

}