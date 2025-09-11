//Wap to print even number from 1 to 100 using contineus statment.

#include <stdio.h>
int main ()
{
    int i;
    for (i=1;i<=100;i++)
    {
        if (i%2!=0)
        {
            continue; //skip all odd number
        }
        printf ("%d ",i); //print even number
    }
    return 0;
}