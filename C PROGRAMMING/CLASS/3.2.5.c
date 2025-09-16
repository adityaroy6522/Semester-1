#include <stdio.h>
int main ()
{
    int a,b,c,d;
    for (a=1 , b=1 , c=1 ,d=1 ; a<=20 && b<=20 && c<=20 && d<=20 ;a++,b++,c++,d++)
    {
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d && ((a*a*a) + (b*b*b)) == ((c*c*c) + (d*d*d)))
        {
            printf ("\n%d%d%d%d",a,b,c,d);
        }
       
    }
    return 0;
}