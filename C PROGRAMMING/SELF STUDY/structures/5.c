//Ques : Create a structure type 'Person' with name, salary and age as its attributes. Declare and initialize 2 variables for this. Print the name of first person and age of the other.

#include <stdio.h>
#include <string.h>
int main ()
{
    struct Person
    {
        char name[50];
        int salary;
        int age;
    }p1,p2;

    strcpy(p1.name,"aditya roy");
    p1.salary = 99999999;
    p1.age = 18;

    strcpy(p2.name,"rakshit roy");
    p2.salary = 99999999;
    p2.age = 19;

    printf ("%s\n",p1.name);
    printf ("%d",p2.age);
    
    return 0;
}