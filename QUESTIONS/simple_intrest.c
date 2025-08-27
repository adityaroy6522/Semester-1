#include <stdio.h>
int main()
{
    float p,r,t,si;                // can define all veriables from a single float command and in single line // created a container
    printf ("principle=");        // printed princple so that it just comes before the user input
    scanf ("%f",&p);              //repeated the same for rate and time
    printf ("rate=");
    scanf ("%f",&r);
    printf ("time=");
    scanf ("%f",&t);
    
     si=p*r*t/100;
    printf ("simple intrest= %f",si);

    return 0;
}