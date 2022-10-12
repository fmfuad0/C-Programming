#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    int a,reverse=0;
    while(n!=0)
    {
        a=n%10;
        reverse=(reverse*10)+a;
        n=n/10;
    }
    printf("\nReverse number is %d\n",reverse);
    return 0;
}

