//Ques: Rotate the given array 'a' by k steps, where k is non-negative.
//Note: k can be greater than n as well where n is the size of array 'a'.

#include <stdio.h>
void rev (int arr[],int n,int a,int b)
{
    for (int i=a,j=b;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    } 
    return;
}
int main ()
{
    int n,a,b,k;
    printf ("enter size of array ");
    scanf ("%d",&n);
    int arr[n],brr[n];
    for (int i=0;i<n;i++)
    {
        printf ("enter element %d ",i+1);
        scanf ("%d",&arr[i]);
    }
    printf ("enter rotation ");
    scanf ("%d",&k);
    if (k>n)
    {
        k=k%n;
    }
    rev(arr,n,0,n-1);  
    rev(arr,n,0,k-1);
    rev(arr,n,k,n-1); 

    for (int i=0;i<n;i++)
    {
    printf ("%d ",arr[i]);
    }
    
    return 0;
}