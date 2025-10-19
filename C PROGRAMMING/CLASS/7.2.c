#include <stdio.h>

int main() {
    int n, i;
    char name[50];
    float basic_pay, da, gross_salary;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", name);

        printf("Enter basic pay of %s: ", name);
        scanf("%f", &basic_pay);

        da = 0.52f * basic_pay;  // DA is 52% of basic pay
        gross_salary = basic_pay + da;  // Gross = basic pay + DA

        printf("Employee Name: %s\n", name);
        printf("Gross Salary: %.2f\n", gross_salary);
    }

    return 0;
}