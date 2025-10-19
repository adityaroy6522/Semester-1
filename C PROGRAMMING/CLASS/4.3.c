#include <stdio.h>

int main() {
    int x = 10; 
    printf("In main block: x = %d\n", x);

    { 
        int y = 20; 
        printf("In first block: x = %d, y = %d\n", x, y);
    }

    

    { 
        int z = 30; 
        printf("In second block: x = %d, z = %d\n", x, z);
    }

   

    return 0;
}
