#include <stdio.h>

int main() 
{
    int a = 10;
    float b = 25.75;
    char c = 'A';

    // Declare pointers of different types
    int *ptr_int;
    float *ptr_float;
    char *ptr_char;

    // Initialize pointers with the addresses of variables
    ptr_int = &a;
    ptr_float = &b;
    ptr_char = &c;

    // Display results
    printf("=== Demonstrating Different Pointer Types ===\n\n");

    printf("Int var 'a': %d\n", a);
    printf("Addr stored in int pointer: %p\n", ptr_int);
    printf("Value pointed to by int pointer: %d\n\n", *ptr_int);

    printf("Float variable 'b': %.2f\n", b);
    printf("Address stored in float pointer: %p\n", ptr_float);
    printf("Value pointed to by float pointer: %.2f\n\n", *ptr_float);

    printf("Character variable 'c': %c\n", c);
    printf("Address stored in char pointer: %p\n", ptr_char);
    printf("Value pointed to by char pointer: %c\n", *ptr_char);

    return 0;
}
