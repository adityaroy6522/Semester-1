#include <stdio.h>
int main ()
{
    int n,Tn,a1,a2,d=-3,i;
    printf ("enter first term ");
    scanf ("%d",&a1);

    printf ("enter second term ");
    scanf ("%d",&a2);

    for (Tn=a1;Tn<=100+(n-1)*d && Tn>0 ;Tn=Tn+d)
    {
        printf ("\n%d",Tn);
    }
    return 0;
}