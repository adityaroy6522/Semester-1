#include <stdio.h>
int main ()
{
    int n,a;
    printf ("enter size of array ");
    scanf ("%d",&n);
    int marks[n];
    for (int i=0;i<=n-1;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&marks[i]);
    }
    
    printf ("enter number limit till the user want ");
    scanf ("%d",&a);

    for (int i=0;i<=n-1;i++)
    {
        if (marks[i]<a)
        {
            printf ("%d\n",marks[i]);
        }
    }
    return 0;
}