//Wap to print odd number from 1 to 100 using continous statment.

#include <stdio.h>
int main ()
{
    int i;
    for (i=1;i<=100;i++)
    {
      if (i%2==0)
      { 
        continue;
      }
       printf ("%d ",i);
    }
    return 0;
}