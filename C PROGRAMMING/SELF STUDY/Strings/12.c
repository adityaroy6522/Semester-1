#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[100]="aditya ";
    char s2[]="roy";
    strcat (s1,s2);
    printf ("%s",s1);
    return 0;
}