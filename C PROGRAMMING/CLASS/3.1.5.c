#include <stdio.h>
int main ()
{
    int l1,l2,l3,b1,b2,b3,p1,p2,p3,max;
    printf ("enter length and breadth of rectangle 1\n");
    scanf ("%d%d",&l1,&b1);

    printf ("enter length and breadth of rectangle 2\n");
    scanf ("%d%d",&l2,&b2);

    printf ("enter length and breadth of rectangle 3\n");
    scanf ("%d%d",&l3,&b3);

    p1=2*(l1+b1);
    p2=2*(l2+b2);
    p3=2*(l3+b3);

   max = (p1>p2 && p1>p3) ? printf ("p1 is greatest"): ((p2>p1 && p2>p3) ? printf ("p2 is greatest "):printf ("p3 is greatest"));
  

    return 0;
}