#include <stdio.h>
int main ()
{
    int n;
    printf ("enter a number ");
    scanf ("%d",&n);

    (n>99 && n<1000) ? printf ("number is three digit number") : printf ("number is not three digit number");

    return 0;
}