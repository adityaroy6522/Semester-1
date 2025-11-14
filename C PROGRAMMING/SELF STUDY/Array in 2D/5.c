//Ques: Write a program to add two matrices.

#include <stdio.h>
void array(char name[],int a,int b,int arr[a][b])
{
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            printf ("enter element in %s[%d][%d] ",name,i,j);
            scanf ("%d",&arr[i][j]);
        }
    }
    return;
}
void print_array(int a,int b,int arr[a][b])
{
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            printf ("%d ",arr[i][j]);
        }
        printf ("\n");
    }
}

int main ()
{
    int a,b,c,d;
    printf ("enter number of rows in arr ");
    scanf ("%d",&a);
    printf ("enter number of columb in arr ");
    scanf ("%d",&b);
    printf ("enter number of rows in brr ");
    scanf ("%d",&c);
    printf ("enter number of columb in brr ");
    scanf ("%d",&d);

    if (a==c && b==d)
    {
        int arr[a][b],brr[c][d],sum[a][b];
        array("arr",a,b,arr);
        array("brr",c,d,brr);

        for (int i=0;i<a;i++)
        {
            for (int j=0;j<b;j++)
            {
                sum[i][j]=arr[i][j]+brr[i][j];
            }
    }
    print_array(a,b,sum);
    }
    else
    {
        printf ("sum not possible");
    }
    return 0;
}