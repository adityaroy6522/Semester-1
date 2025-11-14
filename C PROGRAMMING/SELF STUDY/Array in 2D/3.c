#include <stdio.h>
int main ()
{   
    int a,b=4,j=0;
    printf ("enter number of student  ");
    scanf ("%d",&a);
    int arr[a][b];
    for (int i=0;i<a;i++)
    {
        for (j=0;;)
        {
            printf ("enter roll number of arr[%d][%d] ",i,j);
            scanf ("%d",&arr[i][j]);
            break;
        }
    }
    for (int i=0;i<a;i++)
    {
        for (j=1;j<b;j++)
        {
            printf ("enter marks of PCM in arr[%d][%d] ",i,j);
            scanf ("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            printf ("%d ",arr[i][j]);
        }
        printf ("\n");
    }
    return 0;
}