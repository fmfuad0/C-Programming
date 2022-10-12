#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the integer:");
    scanf("%d", &x);
    switch(x>0)
    {
    case 1:
        switch(x%2==0)
        {
            case 1:
                printf("Even-Positive");
                break;
            case 0:
                printf("Odd-Positive");
                break;
        }
    }
    switch(x<0)
    {
    case 1:
        switch(x%2==0)
        {
            case 1:
                printf("Even-Negative");
                break;
            case 0:
                printf("Odd-Negative");
                break;
        }
    }
}
