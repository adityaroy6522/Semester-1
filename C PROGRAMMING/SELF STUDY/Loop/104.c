//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
//M1

#include <stdio.h>
#include <math.h>
int main ()
{ 
    int power,b,a;
    printf ("enter base ");
    scanf ("%d",&a);
    printf ("enter power ");
    scanf ("%d",&b);

    power=pow(a,b);
    printf ("%d^%d=%d",a,b,power);
    return 0;
}