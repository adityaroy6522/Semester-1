#include <stdio.h>

void modify_values(int *ip, double *dp, char *cp)
{
   *ip += 10;
    *dp *= 1.5;
    if (*cp >= 'a' && *cp <= 'z')
        *cp = *cp - 'a' + 'A';
}
int main(void)
{
    int a = 5;
    double b = 4.0;
    char c = 'g';

    printf("Before: a = %d, b = %.2f, c = %c\n", a, b, c);
    modify_values(&a, &b, &c); 
    printf("After:  a = %d, b = %.2f, c = %c\n", a, b, c);

    return 0;
}