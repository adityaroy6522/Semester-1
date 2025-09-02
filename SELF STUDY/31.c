#include <stdio.h>
int main ()
{
    int n;
    printf ("enter a number ");
    scanf ("%d",&n);

    if (n%15==0)
    {
        printf ("number is divisible by 3 and 5");
    }
    else 
    {
        printf ("number may be either divisible by 5 or 3 or neither 5 and 3");
    }
    return 0;
}