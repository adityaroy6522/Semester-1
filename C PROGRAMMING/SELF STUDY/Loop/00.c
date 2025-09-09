//write a c program to input the first term of gp and it show give choice to enter second term or common ratio then find the gp.

#include <stdio.h>
#include <math.h>

int main()
 {
    int a1, a2, r, n, choice, i, term;

    printf("Enter first term (a1): ");
    scanf("%d", &a1);

    printf("Choose input method:\n");
    printf("1. Enter second term\n");
    printf("2. Enter common ratio\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter second term (a2): ");
        scanf("%d", &a2);
        r = a2 / a1;
    } else if (choice == 2) {
        printf("Enter common ratio (r): ");
        scanf("%d", &r);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Geometric Progression:\n");
    term = a1;
    for (i = 0; i < n; i++) {
        printf("%d ", term);
        term *= r;
    }
    printf("\n");

    return 0;
}