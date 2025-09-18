//Ques: Write a program to print all the ASCIl values and their equivalent characters of 26 alphabets using a while loop.
//M2

#include <stdio.h>
int main ()
{
    for (int i=65;i<=90;i++)
    {
        char ch=(char)i;
        printf ("%c=%d\n ",ch,i);
    }
    return 0;
}