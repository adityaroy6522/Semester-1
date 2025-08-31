#include <stdio.h>
int main ()
{
    int x,y,p,l;
    printf ("enter cost and selling price ");
    scanf ("%d %d",&x,&y);
    if (y-x<0)
    {
        l=y-x;
        printf ("loss is %d",-l);
    }
    if (y-x==0)
    {
        printf ("no proift and loss");
    }
    else
    {
        p=y-x;
        printf ("profit is %d",p);
    }
    return 0;

} 