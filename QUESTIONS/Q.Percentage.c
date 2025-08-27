#include <stdio.h>
int main ()
{
    float a=1;                                    //marks of maths
    float A=2;                                    //Variable is case sensitive (A and a are diffrent)
    float m1=3;                     //Variable shouldnt start with number but alphabet (m1 correct but 1m incorrect)
    float FLOAT=4;                             //variable shoudent be special character (!@#$%^&*() and space ,<>{}[]) except _(underscore) 
    float e=5.5;                                    //sintex are not allowed (auto int float etc)
float f=(a+A+m1+FLOAT+e)/5;
printf ("persentage of 5 sub is %f",f);
    return 0;
}