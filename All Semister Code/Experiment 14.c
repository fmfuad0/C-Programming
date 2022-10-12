#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value of X:");
    scanf("%d", &x);
    printf("Enter value of Y:");
    scanf("%d", &y);
    if(x>0 && y>0)
    {
        printf("The coordinate point (%d , %d) lies in the First quadrant.",x,y);
    }
    else if(x<0 && y>0)
    {
        printf("The coordinate point (%d , %d) lies in the Second quadrant.",x,y);
    }
    else if(x<0 && y<0)
    {
        printf("The coordinate point (%d , %d) lies in the Third quadrant.",x,y);
    }
    else if(x<0 && y<0)
    {
        printf("The coordinate point (%d , %d) lies in the Fourth quadrant.",x,y);
    }
}
