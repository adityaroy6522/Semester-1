//General formula for AP

#include <stdio.h>
int main ()
{
    int a1,a2,n,d,Tn;
    printf ("enter first term ");
    scanf ("%d",&a1);
    printf ("enter first term ");
    scanf ("%d",&a2);
    printf ("enter number of terms you want ");
    scanf ("%d",&n);

    d=a2-a1;

    for (Tn=a1;Tn>=a1+(n-1)*d;Tn=Tn+d)
    {
        printf ("\n%d",Tn);
    }
    return 0;
}