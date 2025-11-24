#include <stdio.h>
int main ()
{
    char arr[]="collage wallah is the best channal for coding\0";
    int i=0;
    while (arr[i]!='\0')
    {
        printf ("%c",arr[i]);
        i++;
    }
    printf ("\n");

    char arr[]="Collage wallah is the best channal for coding";
    int i=0;
    while (arr[i]!='\0')
    {
        printf ("%c",arr[i]); 
        i++;
    }
    printf ("\n"); 

    return 0;
}