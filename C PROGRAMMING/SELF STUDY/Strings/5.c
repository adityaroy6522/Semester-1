#include <stdio.h>
#include <string.h>
int main ()
{
    int size = 0;
    char str[size+1];
    printf ("Enter the string :");
    scanf ("%[^\n]s",str);
    int i=0;
    while (str[i]!=0)
    {
        size++;
        i++;
    }
    printf ("The reverse is :");
    for (int j=size;j>=0;j--)
    {
        printf ("%c",str[j]);
    }
    return 0;
}