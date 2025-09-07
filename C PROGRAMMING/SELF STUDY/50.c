#include <stdio.h>
int main ()
{
    int n;
    printf ("enter a number ");
    scanf ("%d",&n);

    //ternary operator
    //exp1 ? exp2 : exp3

    (n%2==0) ? printf("%d is even",n) : printf("%d is odd",n);

    return 0;
}