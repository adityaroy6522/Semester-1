#include <stdio.h>
int main ()
{
    int x,y;
    printf ("enter x and y ");
    scanf ("%d%d",&x,&y);

    if (x==0 && y==0)
    {
        printf ("point lies on x origin");
    }
    else if (x==0)
    {
        printf ("point lies on y axis");
    }
    else if (y==0)
    {
        printf ("point lies on x axis");
    }
    else 
    {
        printf ("point lies on xy plain");
    }
    return 0;
}