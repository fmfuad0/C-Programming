#include<stdio.h>
/*int abc();*/
///Call by reference
int main()
{
    int *a,*b,sum;
    scanf("%d %d", &a,&b);             /// '*' for value
    sum=abc(&a,&b);                    ///  '&' for address of the variable
    printf("\n Sum is= %d", &sum);
}

abc(int *x, int *y)
{
    return *x+*y;
}
