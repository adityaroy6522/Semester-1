#include <stdio.h>
int main ()
{
int n;
printf ("enter the size of array ");
scanf ("%d",&n);
int arr[n];
int sum =0;
for (int i=0;i<n;i++)
{
    printf (" enter the element %d ",i+1);
    scanf ("%d",&arr[i]);
    sum = sum + arr[i];
}
printf ("%d",sum);
return 0;
}