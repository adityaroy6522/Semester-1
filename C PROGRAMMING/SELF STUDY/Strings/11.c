#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[]="aditya roy";
    int x=strlen(s1);
    char s2[x];
    strcpy (s2,s1);
    printf ("%s",s2);
    return 0;
}