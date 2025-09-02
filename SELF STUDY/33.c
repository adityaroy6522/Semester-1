#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter the value of a,b,c ");
    scanf ("%d %d %d",&a,&b,&c);
  
    if (a>b && a>c && a>0 && b>0 && c>0)
    {
        printf ("%d is greatest ",a);
    }
    if (b>a && b>c && a>0 && b>0 && c>0)
    {
        printf ("%d is greatest ",b);
    }
    if (c>a && c>b)
    {
        printf ("%d is the greatest ",c);
    }
    return 0;
}