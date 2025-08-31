#include <stdio.h>
int main ()
{
    int n;
    printf ("enter a number ");
    scanf ("%d",&n);

    if (5<n<10)
    {
        printf ("number lies between 5 and 10");
    }
    else 
    {
        printf ("does not lies between 5 and 10");
    }
    return 0;
    }