//print the pattern if the inpuit is 3 
// 6 5 4
//  3 2
//   1

#include <stdio.h>
int main ()
{
    {
        int n, i, j, num;
        printf("Enter a number: ");
        scanf("%d", &n);
        num = n*(n+1)/2;
        for (i=0;i<n;i++)
        {
            for (j=0;j<i;j++)
            {
                printf(" ");
            }
            for (j=0;j<n-i;j++)
            {
                printf("%d ",num--);
            }
            printf("\n");
        }
    }
    return 0;
}