#include <stdio.h>
int main ()
{
    typedef struct book
    {
        char name[50];
        int noofpage;
        int price;
    }book;

    book a;
    book b;
    book c;
    
    return 0;
}