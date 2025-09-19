#include <stdio.h>
int main ()
{
    int a,c,b;
    printf ("Please enter the side of triange ");
    scanf ("%d%d%d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf ("valid triangle\n");
    }
    if (a*a+b*b==c*c)
    {
        printf ("right angle triange");
    }
    if (a==b && b==c && c==a)
    {
        printf ("equilateral triangle");
    }
    if (a!=b && b!=c && c!=a)
    {
        printf ("scalene triangle");
    }
    return 0;
}