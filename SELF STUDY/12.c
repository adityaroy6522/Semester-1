#include <stdio.h>
int main ()
{
    int n;
    printf ("enter the year ");
    scanf ("%d",&n);

    if (n%4==0)
    {
        printf ("its a leap year");
    }
    else
    {
        printf ("its not leap year");

    }
    return 0;
}