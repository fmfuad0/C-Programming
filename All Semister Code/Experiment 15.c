#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("The triangle is Equilateral...");
    }
    else if((a==b && b!=c) || (b==c && b!=a) || (c==a) && a!=b)
    {
        printf("This triangle is Isosceles...");
    }
    else
    {
        printf("This triangle is Scalene...");
    }
}
