#include <stdio.h>
int main ()
{
    int x1,x2,x3,y1,y2,y3,a;
    
    printf ("enter first point coordinate ");
    scanf ("%d%d",&x1,&y1);

     
    printf ("enter second point coordinate ");
    scanf ("%d%d",&x2,&y2);

     
    printf ("enter third point coordinate ");
    scanf ("%d%d",&x3,&y3);

    a=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

    if (a==0) 
    {
        printf ("all points are colinear");
    }
    else
    {
        printf ("points are not colinear");
    }
    return 0;
}