#include <stdio.h>
#include <string.h>
int main ()
{
    int size =0;
    char s1[]="aditya roy";
    int i=0;
    while (s1[i]!='\0')
    {
        size++;
        i++;
    }
    char s2[size];
    for (int i=0;i<size;i++)
    {
        s2[i]=s1[i];
    }
    printf ("%s",s2);
    return 0;
}