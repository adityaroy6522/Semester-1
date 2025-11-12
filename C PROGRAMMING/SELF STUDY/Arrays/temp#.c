#include <stdio.h>
void rev (int arr[],int a,int b)
{
    for (int i=a,j=b;i<=j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i=0;i<7;i++)
    {
        printf ("%d ",arr[i]);
    }
}

int main () 
{
    int arr[7]={1,2,3,4,5,6,7};
    rev(arr,1,4);
    return 0;
}