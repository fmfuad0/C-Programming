//Take the base and height of a triangle.
//Calculate its area
#include<stdio.h>
int main ()
{
    float a,b,h;
    printf("Enter the base of the triangle:");
    scanf("%f", &b);
    printf("Enter the height of the triangle:");
    scanf("%f", &h);
    a=0.5*b*h;
    printf("Area of the triangle is %0.3f",a);
}
