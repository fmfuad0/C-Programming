#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter X:");
    scanf("%d", &x);
    printf("Enter Y:");
    scanf("%d", &y);
    switch(x>y)
    {
case 1:
    printf("%d", x);
    break;
case 0:
    printf("%d", y);
    }

}
