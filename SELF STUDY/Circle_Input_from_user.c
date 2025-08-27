#include <stdio.h>
int main ()
{
    float radius;  
    printf (" ");             
    scanf ("radius of the circle is %f",&radius);                       //first from float radius it creates a container and scanf ask the user to fill the container

    float pi=3.1415;
    float a=pi*radius*radius;
    printf ("area of the circle is %f",a);

    return 0;

}