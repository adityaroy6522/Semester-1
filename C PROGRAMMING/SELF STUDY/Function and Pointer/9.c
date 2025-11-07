#include <stdio.h>
int main ()
{
    int a=25;
    int x=&a;
   // printf ("%p",&a);        //0x16b856ef8%   
    printf ("%p",x);             //0x16f4feef8%    

    return 0;
}