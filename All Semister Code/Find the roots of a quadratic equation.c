//Find the roots of a quadratic equation(ax^2+bx+c=0)
#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,discriminant,root_1,root_2,real_part,imaginary_part;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("Enter the value of c:");
    scanf("%f", &c);
    discriminant=b*b-4*a*c;
    if (discriminant>0)
    {
        root_1=(-b+sqrt(discriminant))/2*a;
        root_2=(-b-sqrt(discriminant))/2*a;
        printf("Root 1 is %0.3f\n\nRoot 2 is %0.3f", root_1,root_2);
    }
    if (discriminant==0)
    {
        root_1=root_2=(-b/2*a);
        printf("Root 1 is %0.3f\n\nRoot 2 is %0.3f", root_1,root_2);
    }
    if (discriminant<0) //in that case roots are imaginary numbers
    {
        real_part=-b/(2*a);
        imaginary_part=sqrt(-discriminant)/(2*a);
        printf("Root 1 is %0.3f+%0.3fi\n\nRoot 2 is %0.3lf-%0.3lfi", real_part,imaginary_part,real_part,        imaginary_part);
    }

}
