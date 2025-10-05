#include <stdio.h>
int main ()
{
    int n;
    printf ("enter number of rows ");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int a=1,b=0;
        for (int j=1;j<=i;j++)
        {
            if (i%2!=0)
            {
                printf ("%d",a);
                if (a==1)
                {
                    printf ("%d",b);
                }
            }
            else //(i%2==0)
            {
                printf ("%d",b);
                if (b==0)
                {
                    printf ("%d",a);
                }
            }
        }
       printf ("\n");
    }
    return 0;
}