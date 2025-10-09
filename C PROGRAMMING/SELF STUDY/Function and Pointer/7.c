#include <stdio.h>
// int factorial (int x)
// {
//     int fact=1;
//     for (int i=1;i<=x;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// } 

int main ()
{
    int n;
    printf ("enter number of rows ");
    scanf ("%d",&n);
    for (int i=0;i<=n;i++)
    {
        int first=1;
        // for (int k=1;k<=n-1-i;k++)
        // {
        //     printf (" ");
        // }
        for (int j=0;j<=i;j++)
        {
            
            //int fact=factorial (i)/(factorial (j)*factorial (i-j));
            int first=(i-j)/(j+1);
            printf ("%d ",first);
        }
       printf ("\n"); 
    }
    return 0;
}