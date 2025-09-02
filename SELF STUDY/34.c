#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf ("enter the value of a,b,c,d ");
    scanf ("%d%d%d%d",&a,&b,&c,&d);

    if (a>b && a>c && a>d)
    {
        printf ("%d is the greatest",a);
    }
    if (b>a && b>c && b>d)
    {
        ("%d is the greatest",b);
    }
    if (c>a && c>b && c>d )
    {
        printf ("%d is the greatest",c);
    }
    if (d>a && d>b && d>c )
    {
        printf ("%d is the greatest",d);
    }
    return 0;

}