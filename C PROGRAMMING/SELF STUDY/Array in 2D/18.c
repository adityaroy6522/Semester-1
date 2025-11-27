//Ques: Write a program to print the multiplication of two matrices given by the user.

#include <stdio.h>
// void array (int m,int n,int arr[m][n])
// {
//     for (int i=0;i<m;i++)
//     {
//         for (int j=0;j<n;j++)
//         {
//             scanf ("%d",&arr[i][j]);
//         }
//     }
//     return;
// }

int main ()
{
    int a,b,m,n;
    printf ("enter row of arr ");
    scanf ("%d",&a);
    printf ("enter column of arr ");
    scanf ("%d",&b);
    printf ("enter row of brr ");
    scanf ("%d",&m);
    printf ("enter column of arr ");
    scanf ("%d",&n);
    int arr[m][n],brr[a][b],crr[m][b];
    if (n!=a)
    {
        printf ("multiplaction not possible ");
    }
    
    else
    {
        printf ("enter element in arr \n");
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                scanf ("%d",&arr[i][j]);
            }
        }
        printf ("enter element in brr \n");
        for (int i=0;i<a;i++)
        {
            for (int j=0;j<b;j++)
            {
                scanf ("%d",&brr[i][j]);
            }
        }
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<b;j++)
            {
                crr[i][j]=0;
            }
        }
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<b;j++)
            {
                for (int k=0;k<n;k++)
                {
                    crr[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
        printf ("\n");
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<b;j++)
            {
                printf ("%d ",crr[i][j]);
            }
            printf ("\n");
        }

    }
    return 0;
}