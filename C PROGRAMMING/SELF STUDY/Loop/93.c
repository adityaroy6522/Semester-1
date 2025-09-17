//Ques: Print the sum of this series :
//1 - 2 + 3 - 4 + 5 - 6... upto 'n'.
// M1

#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    printf ("enter number of term ");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }
    }
    printf ("%d",sum);
    return 0;
}
