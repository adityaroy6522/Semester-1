#include <stdio.h>
int maze (int cr,int cc, int er ,int ec)
{
    int downway=0;
    int rightway=0;
    if (cr==er || cc==ec) return 1;

    if (cr==er) 
    rightway = maze (cr,cc+1,ec,er);

    if (cc==ec)
    downway = maze (cr+1,cc,ec,er);

    if (cr<er && cc<ec)
    {
        rightway = maze (cr,cc+1,ec,er);
        downway = maze (cr+1,cc,ec,er);
    }
    int totalways = downway+rightway;
    return totalways;
}

int main ()
{
    int m,n;
    printf ("enter number of rows ");
    scanf ("%d",&m);
    printf ("enter number of columb ");
    scanf ("%d",&n);
    int x = maze (1,1,m,n);
    printf ("%d",x);
    return 0;
} 