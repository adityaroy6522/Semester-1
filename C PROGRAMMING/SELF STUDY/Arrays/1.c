#include <stdio.h>
int main ()
{
    int a[5]={5,2,8,3,7};           //5 dabbe created
    a[4]=100;                       //{5,2,8,3,100}
    printf ("%d",a[4]);
    return 0; 
}