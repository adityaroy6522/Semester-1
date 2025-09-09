#include <stdio.h>
#include <math.h>
int main ()
{
    int a,r,n,Tn;
    printf ("enter first term ");
    scanf ("%d",&a);
    printf ("common ratio ");
    scanf ("%d",&r);
    printf ("enter number of term you want ");
    scanf ("%d",&n);

    for (Tn=a;Tn<=a*pow(r,n-1);Tn=Tn*r)
    {
        printf ("\n%d",Tn);
    }
    return 0;
}