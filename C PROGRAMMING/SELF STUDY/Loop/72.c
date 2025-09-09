#include <stdio.h>
#include <math.h>
int main ()
{
    int a1,a2,r,n,Tn;
    printf ("enter first term ");
    scanf ("%d",&a1);
    printf ("enter second term ");
    scanf ("%d",&a2);
    printf ("enter number of term you want ");
    scanf ("%d",&n);
    
r=a2/a1;

    for (Tn=a1;Tn<=a1*pow(r,n-1);Tn=Tn*r)
    {
        printf ("\n%d",Tn);
    }
    return 0;
}