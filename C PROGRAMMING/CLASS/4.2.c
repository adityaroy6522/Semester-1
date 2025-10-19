#include <stdio.h>
int g = 100;

void myFunction() {
    int local = 50;  
    printf("Inside function: local = %d\n", local);
    printf("Inside function: global = %d\n", g);
}

int main() {
    myFunction();
    printf("In main: global = %d\n", g); 
    return 0;
}
