//Swap the values of two variables with/without using any third variable.
#include<stdio.h>
int main ()
{
    float a,b,x;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    x=a;
    a=b;
    b=x;
    printf("a=%0.3f\n\n", a);
    printf("b=%0.3f", b);
}
