//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
//M2

#include <stdio.h>
int main ()
{
    int a,b,i,value=1;
    printf ("enter base ");
    scanf ("%d",&a);
    printf ("enter power ");
    scanf ("%d",&b);

    for (i=1;i<=b;i++)
    {
            value = value * a;
    }
    printf ("%d^%d=%d",a,b,value);
    return 0;
}