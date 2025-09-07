#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter age of ram, shyam, ajay ");
    scanf ("%d%d%d",&a,&b,&c);

    if (a<b)
    {
        if (a<c)
        {
            printf ("ram is the youngest");
        }
        else //(a>c)
        {
            printf ("ajay is the youngest");
        }
    }
    else //(b<a)
    {
        if (b<c)
        {
            printf ("shyam is the youngest");
        }
        else //(b>c)
        {
            printf ("ajay is the youngest");
        }
    }
 return 0;   
}