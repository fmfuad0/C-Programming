//Take the radius of a circle.
//Calculate area and circumference.
#include<stdio.h>
int main ()
{
    float r,area,circumference;
    const pi=3.1416;
    printf("Enter the radius of a circle:");
    scanf("%f", &r);
    area=pi*r*r;
    circumference=2*pi*r;
    printf("Area of the circle is %0.3f\n\n",area);
    printf("Circumference of the circle is %0.3f \n",circumference);
}
