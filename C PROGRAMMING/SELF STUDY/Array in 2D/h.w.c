#include <stdio.h>
void array(int n,int a[n])
{
for (int i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
}

void check(int n,int a[n],int b[n],int trr[])
{   
    int x=1;
    int trr[x];
for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (a[i]==b[j])
            {
                trr[x]=a[i];
                x++;
            }
        }
    }
}
int main ()
{
    int n,count=0,count1=0;
    printf ("enter size of array ");
    scanf ("%d",&n);
    int a[n],b[n],c[n];
    array(n,a);
    array(n,b);
    array(n,c);
    check (n,a,b);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("%d ",);
        }
    }
    check (n,a,c);
    check (n,b,c);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            for (int k=0;k<n;k++)
            {
                if ((a[i]==b[j]) && (a[i]==c[j]) && (b[i]==c[j]))
                {
                    count1++;
                }
            }
        }
    }
    printf ("");
    
    
}