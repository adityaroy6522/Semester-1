#include <stdio.h>
int main ()
{
    float radius,a,pi;
    pi=3.14;
    
    
    printf ("please enter the radius of the circle ");    
    scanf ("%f",&radius);                                    //first from float radius it creates a container and scanf ask the user to fill the container

    a=pi*radius*radius;
    printf ("area of the circle is %f\n",a);

    return 0;

}