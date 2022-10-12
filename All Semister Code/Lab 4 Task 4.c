#include<stdio.h>
int main()
{
    int x,salary;
    printf("Enter salary:");
    scanf("%d", &x);
    switch(x<10000)
    {
    case 1:
        salary=x+x*0.25;
        printf("Salary is %d", salary);
        break;
    case 0:
        switch(x>50000)
        {
        case 1:
            salary=x+x*0.1;
            printf("Salary is %d", salary);
            break;
        case 0:
            salary=x+5000;
            printf("Salary is %d", salary);
        }
    }
}
