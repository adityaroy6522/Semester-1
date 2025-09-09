#include <stdio.h>
int main ()
{
    int l,b;
    printf ("lenght and bredth ");
    scanf ("%d%d",&l,&b);

    if (l*b>2*(l+b))
    {
        printf ("area is greater");
    }
    else
    {
        printf ("perimeter is greater");
    }
    return 0;
}