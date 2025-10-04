#include <stdio.h>
int main ()
{
    char ch;
    printf ("enter character of rows ");
    scanf ("%c",&ch);
    for (int i='a';i<=ch;i++)
    {
        for (int j='a';j<=ch;j++)
        {
            printf ("%c ",j);
        }
        printf ("\n");
    }
    return 0;
}