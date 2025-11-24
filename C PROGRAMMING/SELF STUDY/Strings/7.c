//shallow copy

#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[]="aditya";
    char* s2=s1;
    s1[0]='m';
    printf ("%s",s1);
    return 0;
}