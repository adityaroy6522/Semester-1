#include <stdio.h>
int main ()
{
    int x;
    int i;
    scanf ("%d",&x);
    for (i=1;i<=x;i++)
    {
        printf ("hello World\n");
    }
    printf ("%d",i);                     //code didnt run because of scope of veriable
    return 0;
}