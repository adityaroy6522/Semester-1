#include <stdio.h>
int factorial (int x)
{
    int fact=1;
    for (int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
} 

int main ()
{
    int n,r;
    printf ("enter number of rows ");
    scanf ("%d",&n);
    for (int i=0;i<=n;i++)
    {
        for (int k=1;k<=n-i;k++)
        {
            printf (" ");
        }
        for (int j=0;j<=i;j++)
        {
            int fact=factorial (i)/(factorial (j)*factorial (i-j));
            printf ("%d ",fact);
        }
       printf ("\n"); 
    }
    return 0;
}