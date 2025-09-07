#include <stdio.h>
int main ()
{
    int n;
    printf ("enter percentage ");
    scanf ("%d",&n);

    if (n>90)
    {
        printf ("excllent");
    }
    else
    {
        if (n>80)
        {
            printf ("very good");
        }
        else
        {
            if (n>70)
            {
                printf ("good");
            }
            else
            {
                if (n>60)
                {
                    printf ("can do better");
                }
                else
                {
                    if (n>50)
                    {
                        printf ("average");
                    }
                    else 
                    {
                        if (n>40)
                        {
                            printf ("below average");
                        }
                        else
                        {
                            printf ("fail");
                        }
                    }
                }
                
            }
        }
        
    }
}