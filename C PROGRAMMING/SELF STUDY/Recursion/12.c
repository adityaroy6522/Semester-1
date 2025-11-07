#include <stdio.h>
int maze (int m, int n)
{
    int downway = 0;
    int rightway = 0;
    if (m==1 && n==1) return 1;
    
    if (m==1) 
    rightway = maze (m,n-1);

    if (n==1)
    downway = maze (m-1,n);

    if (m>1 && n>1)
    {
    downway = maze (m-1,n);
    rightway = maze (m,n-1);
    }

    int totalways = downway + rightway;
    return totalways;
}

int main ()
{
    int m,n,a;
    printf ("enter number of rows ");
    scanf ("%d",&m);
    printf ("enter number of colmn ");
    scanf ("%d",&n);
    a = maze (m,n);
    printf ("%d",a);
    return 0;
}