//Deep copy

#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[]="hello";
    char str2[]="hello";
    str1[0]='M';
    printf ("%s\n",str1);
    printf ("%s",str2);

    return 0;
}