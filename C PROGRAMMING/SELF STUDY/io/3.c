#include <stdio.h>
int main ()
{
    int a,b,q,r;

printf (" please enter the integer value of a,b\n");
scanf ("%d %d",&a ,&b);

q=a/b;
r=a-q*b;

printf ("the remainder when %d is divided by %d is %d\n",a,b,r);
return 0;

}