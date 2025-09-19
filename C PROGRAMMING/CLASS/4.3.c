#include <stdio.h>

int main() {
    int x = 10; // Declared in main block
    printf("In main block: x = %d\n", x);

    { // First inner block
        int y = 20; // Declared in first block
        printf("In first block: x = %d, y = %d\n", x, y);
    }

    //printf("Outside first block: y = %d\n", y); // ❌ Error: y not accessible here

    { // Second inner block
        int z = 30; // Declared in second block
        printf("In second block: x = %d, z = %d\n", x, z);
    }

    // printf("Outside second block: z = %d\n", z); // ❌ Error: z not accessible here

    return 0;
}
