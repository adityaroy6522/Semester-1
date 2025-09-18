//Ques: Write a program to print all the ASCIl values and their equivalent characters of 26 alphabets using a while loop.
//M1

#include <stdio.h>
int main ()
{
    char ch='A';
    while (ch<='Z')
    {
    printf ("%c = %d\n",ch,ch);
    ch++;
    }
    return 0;
}