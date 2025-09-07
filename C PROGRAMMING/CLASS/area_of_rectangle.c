#include <stdio.h>
int main ()
{
    int l,b,A,P;

    printf ("length of rectange is ");
    scanf ("%d",&l);

    printf ("breath of rectange is ");
    scanf ("%d",&b);

    A=l*b;
    printf ("area of circle is %d\n",A);
    
    P=2*(l+b);
    printf ("perimeter of circle is %d",P);

    return 0;
}