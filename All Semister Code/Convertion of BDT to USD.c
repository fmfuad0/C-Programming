//Take an employee's salary as input(int BDT).
//Convert it into USD.
#include<stdio.h>
#define rate 91.35
int main()
{
    float taka, doller;
    printf("Enter the salary in BDT:");
    scanf("%f", &taka);
    doller = taka / rate;
    printf("%.2f taka = %.2f dollar \n", taka, doller);
    return 0;
}
