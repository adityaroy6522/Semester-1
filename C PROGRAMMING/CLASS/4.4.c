#include <stdio.h>

void counter() {
    static int count = 0; // static local variable
    count++;              // increments every time function is called
    printf("Count = %d\n", count);
}

int main() {
    counter(); // First call
    counter(); // Second call
    counter(); // Third call
    return 0;
}
