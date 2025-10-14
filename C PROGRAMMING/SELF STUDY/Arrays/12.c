//Homework: Calculate the product of all the elements in the given array.

#include <stdio.h>
int main ()
{
    int i, pro=1, arr[5];
    for (i=0;i<=4;i++)
    {
        printf ("enter element number %d ",i+1);
        scanf ("%d",&arr[i]);
        pro=pro*arr[i];
    }
    printf ("product of all element of array is %d",pro);
    return 0;
}