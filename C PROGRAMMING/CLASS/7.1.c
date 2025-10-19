#include <stdio.h>
struct complex_no
{
    float r, img;
};
int main()
{
    struct complex_no c1, c2, sum,diff;
    printf("enter part of complex number:\n");        
    scanf("%f %f", &c1.r, &c1.img); 
    
    printf("enter part of complex number:\n");            
    scanf("%f %f", &c2.r, &c2.img);
    
    sum.r = c1.r + c2.r;
    sum.img = c1.img + c2.img;
    diff.r = c1.r - c2.r;          
    diff.img = c1.img - c2.img;
    
    printf("Sum of complex number: %f + %fi\n", sum.r, sum.img);
    printf("Difference of complex number: %f + %fi\n", diff.r, diff.img);


    return 0;
}