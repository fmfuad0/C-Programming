#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 angles of the triangle (In Degree):");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c)==180)
    {
        printf("The triangle is valid...");
    }
    else
    {
        printf("Invalid triangle...");
    }
}

