#include <stdio.h>
int main ()
{
    int n;
    printf ("enter a number ");
    scanf ("%d",&n);
    for (int count =0;n==n/10 && n>0; count++)
    {
        printf ("%d",count);
    }
    return 0;

}