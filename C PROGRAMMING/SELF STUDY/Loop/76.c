#include <stdio.h>
int main ()
{
    int Tn,a1,a2,n;
    printf ("enter first term ");
    scanf ("%d",&a1);

    printf ("enter second term ");
    scanf ("%d",&a2);

    for (Tn=a1;Tn<=100+(n-1)*-3 && Tn>0;Tn=Tn-3)
    {
        printf ("\n%d",Tn);
    }
    return 0;
}