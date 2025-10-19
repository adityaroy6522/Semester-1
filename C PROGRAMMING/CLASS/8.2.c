// Perform pointer arithmetic (increment and decrement) on pointers of different data
// types. Observe how the memory addresses change and the effects on data
// access.

#include <stdio.h>
int main ()
{
    int n;
    scanf ("%d",&n);
    for (int i=0;i<=n;i++)
    {
        int a=1;
        a++;
        printf ("%p\n",&a);
    }

    return 0;
}