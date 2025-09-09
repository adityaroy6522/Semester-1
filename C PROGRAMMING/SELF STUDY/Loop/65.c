//general formula of AP

#include <stdio.h>
int main ()
{
    int i,n,Tn,d,a;
    printf ("enter the number of terms you want ");
    scanf ("%d",&i);

    printf ("enter the diffrence of two term ");
    scanf ("%d",&d);

    printf ("enter first term ");
    scanf ("%d",&a);

    for (n=1;n<=i;n++)
    {
        Tn=a+(n-1)*d;
        printf ("\n%d",Tn);
    }
    return 0;
}