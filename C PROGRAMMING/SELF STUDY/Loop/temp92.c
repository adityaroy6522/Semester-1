//Ques: Print the sum of this series :
//1 - 2 + 3 - 4 + 5 - 6... upto 'n'.
// M1


#include <stdio.h>
int main ()
{
    int i=1,n,sum=0;
    printf ("enter the number of terms ");
    scanf ("%d",&n);

   while (i<n)
   {
    sum=sum+(2*i-1)-2*i;
    i++;
   }
   printf ("\n%d",sum);

    return 0;
}

