#include <stdio.h>
#include <math.h>
int main ()
{
    int a=3,r=4,n,Tn;
    printf ("enter number of terms you want ");
    scanf ("%d",&n);

    for (Tn=a;Tn<=a*pow(r,n-1);Tn=Tn*r)
    {
        printf ("\n%d",Tn);
    }
    return 0;
}