#include <stdio.h>
int main ()
{
    int a=25;
    int* x;
    x=&a;
    printf ("%p",x);

    return 0;
}