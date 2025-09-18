#include <stdio.h>
int main ()
{
    float n;
   printf ("enter percentage ");
   scanf ("%f",&n);
   
   if (n>90)
   {
    printf ("excellent");
   }
   else if (n>80)
   {
    printf ("very good");
   }
    else if (n>70)
   {
    printf ("good");
   }
    else if (n>60)
   {
    printf ("can do better");
   }
    else if (n>50)
   {
    printf ("Average");
   }
    else if (n>40)
   {
    printf ("below average");
   }
    else if (n<40 && n>0)
   {
    printf ("fail");
   }
    else
   {
    printf ("please enter valid percentage");
   }
   return 0;
}