#include <stdio.h>
int main ()
{
    int rows,i,columns;
    printf ("enter a row :");
    scanf ("%d",&rows);
    printf ("enter a columns :");
    scanf ("%d",&columns);

    for (int i=1;i<=columns;i++)              //number of lines
    {
        for (int i=1;i<=rows;i++)            //number of * in a line 
        {
        printf ("* ");
        }
        printf ("\n");                      //after each row it poevide a space for second line
    }
    return 0; 
}