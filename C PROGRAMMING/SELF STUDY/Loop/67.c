#include <stdio.h>
int main ()
{
    int n,i;
    printf ("enter the number of terms you want ");
    scanf ("%d",&n);

    for (i=4;i<=3*n-1;i=i+3)
    {
        printf ("\n%d",i);
    }
    return 0;
}