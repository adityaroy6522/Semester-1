#include <stdio.h>
int main ()
{
    int a,b,q,r;
    printf ("please enter the number a and b\n");
    scanf ("%d %d",&a,&b);

    r=a%b;
    printf ("the remander when %d is divided by %d is %d",a,b,r);

    return 0;
}