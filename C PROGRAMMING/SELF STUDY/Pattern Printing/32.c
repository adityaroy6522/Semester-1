#include <stdio.h>
int main ()
{
    int x,y;
    printf ("enter number of rows ");
    scanf ("%d",&x);
    printf ("enter number of columb ");
    scanf ("%d",&y);
    for (int j=1;j<=x;j++)
    {
        for (int k=1;k<=y-j;k++)
        {
            printf (" ");
        }
        for (int j=1;j<=y;j++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}