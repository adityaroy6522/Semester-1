#include <stdio.h>
void greet ()
{
    printf ("hello wolrd\n");
    return;
}
int main ()
{
    for (int i=1;i<=10;i++)
    {
        greet();
    }
    return 0;
}