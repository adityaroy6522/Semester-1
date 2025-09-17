//Ques: Print the sum of this series :
//1 - 2 + 3 - 4 + 5 - 6... upto 'n'.
// M2

#include <stdio.h>
int main ()
{
    int n,i,sum;
    printf ("enter the number of terms ");
    scanf ("%d",&n);
    if (n%2==0)
    {
        sum=-n/2;
    }
    else 
    {
        sum=-n/2+n;
    }
    printf ("%d",sum);
   return 0;
}    