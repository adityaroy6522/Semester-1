#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter any three number ");
    scanf ("%d%d%d",&a,&b,&c);

    if (a>b)                                  //b is out of race
    {
        if (a>c)
        {
            printf ("%d is the greatest",a);
        }
        else                                       //b < a < c
        {
            printf ("%d is the greatest",c);
        }
    }
    else                                         //a<b
    {
       if (b>c)
       {
        printf ("%d is the greatest",b);
       }
       else                                     //c>b>a
       {
        printf ("%d is the greatest",c);
       }
    }
    return 0;
}