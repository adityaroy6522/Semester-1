#include <stdio.h>
int main ()
{
    float p,r,t,si;
    printf ("princple amount = ");
    scanf ("%f",&p);
    printf ("rate of intrest =");
    scanf ("%f",&r);
    printf ("time = ");
    scanf ("%f",&t);

    si = p*r*t/100;
    printf ("simple intrest is %f",si);

    return 0;
}