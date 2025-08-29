#include <stdio.h>
int main ()
{

    char b[50];
    printf ("enter your name ");
    scanf ("%s", b);

    int age;
    printf ("enter your age ");
    scanf ("%d", &age);

    printf ("your name is %s\n",b);
    printf ("your age is %d\n", age);
    return 0;
}