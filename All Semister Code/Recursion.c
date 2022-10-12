#include<stdio.h>

int recursion();

int main ()
{
    int n;
    scanf("%d", &n);
    recursion(n);
}

int recursion(number)
{
    if(number!=0)
    {
          recursion(number-1);       ///  1 to n
        printf("%d\n",number);
    }
    else
    {
        return 0;
    }

}
