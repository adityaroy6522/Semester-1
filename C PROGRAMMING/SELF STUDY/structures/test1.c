//write a recusive function to bring the fibonacci sequance up to the elemennt the user inputs

#include <stdio.h>
int febo (int n)
{
    if (n==0) return 0;
    else
    {
        if (n==1) return 1;
        else return febo(n-1)+febo(n-2);
    }
}
int main ()
{
    int n;
    printf ("Enter the no of element ");
    scanf ("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf ("%d ",febo(i));
    }
    return 0;
}