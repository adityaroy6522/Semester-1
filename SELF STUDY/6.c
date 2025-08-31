#include <stdio.h>
int main ()
{
    float a;
    printf ("input value ");
    scanf ("%f",&a);

    int b=a;
    printf ("factional part is %f",a-b);

    return 0;
}