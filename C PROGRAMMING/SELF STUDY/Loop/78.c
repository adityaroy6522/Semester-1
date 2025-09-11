//check if the number is a prime number
//(use of break and if statment in for loop)


#include <stdio.h>
int main ()
{
    int n;
    printf ("enter a number ");
    scanf ("%d",&n);

    for (int i=2;i<=n-1;i++)
    {
        if (n%i==0)
        {
            printf ("composite number");
        }
        else 
        {
            printf ("prime number");
        }
        break;
    } 
    if (n==1 || n==0)
    {
        printf ("1 is neither prime nor composite ");
    }
    else if (n==2)
    {
        printf ("prime number");
    }
    return 0;
}