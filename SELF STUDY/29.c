#include <stdio.h>
int main ()
{
    int n;
    printf ("enter a number ");
    scanf ("%d",&n);

    if (5<n && n<10)
    {
        printf ("number lies between 5 and 10");
    }
    else
    {
        printf ("number does not lies between 5 and 10");
    }
    return 0;
    }