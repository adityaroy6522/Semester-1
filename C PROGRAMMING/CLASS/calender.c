#include <stdio.h>
int main ()
{
    int n,E;
    printf ("enter the years ");
    scanf ("%d",&n);

    E=(n+(n-1)/4-(n-1)/100+(n-1)/400)%7;
    if (E==0)
    {
        printf ("monday");
    }
    else if (E==1)
    {
        printf ("tuesday");
    }
     else if (E==2)
    {
        printf ("wednesday");
    }
     else if (E==3)
    {
        printf ("thursday");
    }
     else if (E==4)
    {
        printf ("friday");
    }
     else if (E==5)
    {
        printf ("saturday");
    }
     else if (E==6)
    {
        printf ("sunday");
    }
    return 0;

}