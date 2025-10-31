#include <stdio.h>

int main() 
{
    int i_var = 10;
    char c_var = 'Z';
    
    int *i_ptr = &i_var;
    char *c_ptr = &c_var;

    printf("Int Start: %p\n", i_ptr);
    i_ptr++;
    printf("Int After ++: %p\n", i_ptr);
    i_ptr--;
    
    printf("Char Start: %p\n", c_ptr);
    c_ptr++;
    printf("Char After ++: %p\n", c_ptr);
    c_ptr--;

    return 0;
}