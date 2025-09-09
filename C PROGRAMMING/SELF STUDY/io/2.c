#include <stdio.h>
int main ()
{
    int p,q;
    printf ("please enter the value of p and q\n");    // when you enter the value of p and q you change first input p with space q space is also considered as puting new value
 
    scanf (" %d %d",&p ,&q);

    printf ("p=%d q=%d", p,q);
    return 0;
}