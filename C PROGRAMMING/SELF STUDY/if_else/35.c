#include <stdio.h>
int main ()
{
    int i;
    printf ("input integer ");
    scanf ("%d",&i);
if (i%2==0)
{
   printf ("even number");
}
if (i%2!=0)
{
    printf ("odd number");
}
    return 0;
}