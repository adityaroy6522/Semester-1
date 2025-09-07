#include <stdio.h>
int main ()
{
    double x1,x2,x3,y1,y2,y3;

    printf ("enter x1,y1 ");
    scanf ("%lf%lf",&x1,&y1);

    printf ("enter x2,y2 ");
    scanf ("%lf%lf",&x2,&y2);

    printf ("enter x3,y3 ");
    scanf ("%lf%lf",&x3,&y3);

   

    if ((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2))
    {
        printf ("colinear");
    }
    else 
    {
        printf ("non colinear");
    }
    return 0;

}