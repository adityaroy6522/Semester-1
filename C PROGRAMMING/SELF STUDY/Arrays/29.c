//*Ques: Write a program to reverse the array without using any extra array.

#include <stdio.h>
void rev (int arr[],int n)
{
    int i=0;
    int j=n-1;
    for (int i=0,j=n-1;i<j;i++,j--)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}

int main ()
{
    int n;
    printf ("enter size of array ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&arr[i]);     
    }
    rev(arr,n);
    for (int i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
}