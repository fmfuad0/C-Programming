#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    printf("Enter C:");
    scanf("%d",&c);
    switch(a<b && b<c)
    {
        case 1:
            printf("Minimum is %d",a);
            break;
        case 0:
            switch (b<a && b<c)
            {
        case 1:
            printf("Minimum is %d",b);
            break;
        case 0:
            printf("Minimum is %d",c);
            }
            break;
    }
}
