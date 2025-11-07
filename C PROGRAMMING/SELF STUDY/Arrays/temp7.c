#include <stdio.h>
int main() 
{
    int marks[5][3];
    int i, j;

    printf("Enter marks for 5 students (3 subjects each):\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &marks[i][j]);
        }
    }

    int total[5];
    double average[5];
    int highest_total = 0;
    int highest_student = 0;

    printf("\nTotal and Average marks of each student:\n");
    for (i = 0; i < 5; i++) 
    {
        total[i] = 0;
        for (j = 0; j < 3; j++) 
        {
            total[i] += marks[i][j];
        }
        average[i] = (double) total[i] / 3;
        printf("Student %d: Total = %d, Average = %.2f\n", i + 1, total[i], average[i]);

        if (total[i] > highest_total) 
        {
            highest_total = total[i];
            highest_student = i;
        }
    }
    printf("\nHighest scorer: Student %d with %d marks\n", highest_student + 1, highest_total);

    double subject_avg[3];
    int worst_subject = 0;
    double lowest_avg = 1000.0; 

    for (j = 0; j < 3; j++) 
    {
        int sum = 0;
        for (i = 0; i < 5; i++) 
        {
            sum += marks[i][j];
        }
        subject_avg[j] = (double) sum / 5;

        if (subject_avg[j] < lowest_avg) 
        {
            lowest_avg = subject_avg[j];
            worst_subject = j;
        }
    }
    printf("Subject %d has the lowest class average: %.2f\n", worst_subject + 1, lowest_avg);
    printf("Total memory consumed by the array: %zu bytes\n", sizeof(marks));
    return 0;
}