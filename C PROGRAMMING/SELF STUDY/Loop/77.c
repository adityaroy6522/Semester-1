#include <stdio.h>
#include <math.h>
int main ()
{
    float a1,a2,n,Tn,r;
    printf ("enter first term ");
    scanf ("%f",&a1);
    printf ("enter second term ");
    scanf ("%f",&a2); 
    printf ("enter number of term you want ");
    scanf ("%f",&n);

    r=a2/a1;

    for (Tn=a1;Tn>=a1*pow(r,n-1);Tn=Tn*r)
    {
        printf ("\n%f",Tn);
    }
    return 0;
}
