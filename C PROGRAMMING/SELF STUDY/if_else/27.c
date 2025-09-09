#include <stdio.h>
int main ()
{
    int n;
    printf ("enter a number ");
    scanf ("%d",&n);

    if (n%3==0 || n%5==0 || n%15==0)
    {
        printf ("number is divisible by 5 or 3 or both");
    }
    else
    {
        printf ("number is neither divisible by 5 or 3");
    }
    return 0;
}  