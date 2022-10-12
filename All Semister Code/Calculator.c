#include<stdio.h>
int main()
{
    int a,b,x;
    char op;
    start:
    printf("Enter the value of A and B:");
    scanf("%d %d",&a,&b);
    mistake:
    printf("Enter the Operator(+,-,*,/,%%):");
    fflush(stdin);
    scanf("%c",&op);
    if((op=='+') || (op=='-') || (op=='*') || (op=='/') || (op=='%'))
    {
        goto calculation;
    }
    else
    {
        printf("Invalid Operator...");
        goto mistake;
    }
    calculation:
        if(op=='+')
        {
            printf("A + B=%d",a+b);
        }

        else if(op=='-')
        {
            printf("A - B=%d",a-b);
        }
        else if(op=='*')
        {
            printf("A * B=%d",a*b);
        }
        else if(op=='/')
        {
            printf("A / B=%d",a/b);
        }
        else if(op=='%')
        {
            printf("A %% B=%d",a%b);
        }
        printf("\n\nEnter 1 to check again:");
        scanf("%d",&x);
        if(x==1)
        {
            goto start;
        }
        else
        {

        }

}
