#include <stdio.h> 
int main ()
{
    int marks[10]={1,2,3,66,7,8,9,9,4,8};
    for (int i=0;i<=9;i++)
    {
        if (marks[i]<30)
        {
            printf ("%d\n",marks[i]);
        }
    }
    return 0;
}