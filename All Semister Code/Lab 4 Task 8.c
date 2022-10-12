#include<stdio.h>
int main()
{
    int x;
    printf("Enter Mark:");
    scanf("%d",&x);
    switch(x/10)
    {
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("A-");
        break;
    case 5:
        printf("B");
        break;
    case 4:
        printf("C");
        break;
    case 3:
        if(x>=33)
        {
            printf("D");
        }
        else
        {
            printf("Fail");
        }
        break;
    default:
        printf("Fail");
    }
}
