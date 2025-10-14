//Ques: Calculate the sum of all the elements in the given array.

#include <stdio.h>
int main ()
{
    int sum=0, i, arr[4];
    for (i=0;i<=3;i++)
    {
        printf ("enter element number %d ",i+1);
        scanf ("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf ("sum of all element of array is %d",sum);
    return 0;
}