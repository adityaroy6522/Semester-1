//Ques: Given an array of marks of students, if the 
//mark of any student is less than 35 print its roll number. 
//[roll number here refers to the index of the array.]

#include <stdio.h>
int main ()
{
    int i,arr[5];
    for (i=0;i<=4;i++)
    {
        printf ("enter marks of stdent number %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<=4;i++)
    {
        if (arr[i]<35)
        {
        printf ("%d\n",i);
        }
    }
   return 0; 
}