#include <stdio.h>
#include <string.h>
int main ()
{
    char str[]="Kumar aditya";
    char* ptr=str;
    *ptr='p';
    printf ("%s",str);
    return 0;
}