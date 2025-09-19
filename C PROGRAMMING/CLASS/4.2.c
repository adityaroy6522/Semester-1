#include <stdio.h>

// Global variable
int g = 100;

void myFunction() {
    int local = 50;  // Local variable (only inside this function)
    printf("Inside function: local = %d\n", local);
    printf("Inside function: global = %d\n", g);
}

int main() {
    myFunction();

    // Try accessing local outside the function
    // printf("In main: local = %d\n", local); // ❌ ERROR: 'local' undeclared

    printf("In main: global = %d\n", g); // ✅ Allowed
    return 0;
}
