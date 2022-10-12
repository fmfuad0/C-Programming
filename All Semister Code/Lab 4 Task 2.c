#include<stdio.h>
int main()
{
    float x;
    printf("Enter number:");
    scanf("%f", &x);
    switch(x>0)
    {
    case 1:
        printf("Positive");
        break;
    case 0:
        switch(x<0)
        {
        case 1:
            printf("Negative");
            break;
        case 0:
            printf("Zero");
        }
    }

}
