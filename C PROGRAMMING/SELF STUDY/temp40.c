#include <stdio.h>

int main() {
    char ch = 'b';

    switch (ch) {
        case 'a':
            printf("You entered a\n");
            break;
        case 'b':
            printf("You entered b\n");
            break;
        case 'c':
            printf("You entered c\n");
            break;
        default:
            printf("Not a, b, or c\n");
    }

    return 0;
}
