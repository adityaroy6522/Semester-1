//Ques: Create a structure type 'book' with name, price and number of pages as its attributes

#include <stdio.h>
#include <string.h>
int main ()
{
    struct book
    {
        char name[100];
        int price;
        int noofpage;
    };
    struct  book s1;
    strcpy(s1.name,"verma");
    s1.price = 500;
    s1.noofpage = 300;
    printf (" w%s",s1.name);

    struct book s2;
    strcpy(s2.name,"agarwal");
    s2.price = 300;
    s2.noofpage = 700;
    return 0;
}