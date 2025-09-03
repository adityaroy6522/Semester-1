#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter the lenght of side of triange ");
    scanf ("%d%d%d",&a,&b,&c);

    if (a+b>c && b+c>a && a+c>b)
    {
        printf ("the triange is valid");
    }
    else
    {
        printf ("triangle is not valid ");
    }
    return 0;
    
}