//Define a structure of the type employee with members id, name, and salary and designation if the salary of an employee is less than 20000 then hike the salary by 20% , create aleast 3 veriable

#include <stdio.h>
#include <string.h>
int main ()
{
    struct employee
{
    int id;
    char name[20];
    float salary;
    char designation[20];
};
    struct employee emp1, emp2, emp3;

    emp1.id = 1;
    strcpy(emp1.name, "Adi");
    emp1.salary = 18000;
    strcpy(emp1.designation, "Developer");
    
    emp2.id = 2;
    strcpy(emp2.name, "Ved");
    emp2.salary = 22000;
    strcpy(emp2.designation, "Designer");
    

    emp3.id = 3;
    strcpy(emp3.name, "kartiakeya");
    emp3.salary = 15000;
    strcpy(emp3.designation, "Tester");
    
    struct employee employees[] = {emp1, emp2, emp3};
    for(int i = 0; i < 3; i++)
    {
        if(employees[i].salary < 20000)
        {
            employees[i].salary *= 1.1;
        }
    }
    
    for(int i = 0; i < 3; i++)
    {
        printf ("id: %d",employees[i].id);
        printf (", name: %s",employees[i].name);
        printf (", salary: %.2f",employees[i].salary);
        printf (", designation: %s\n",employees[i].designation);
    }

    return 0;
}