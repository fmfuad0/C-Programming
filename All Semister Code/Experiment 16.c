#include<stdio.h>
int main()
{
    float usage,bill;
    printf("Enter electricity usage:");
    scanf("%f",&usage);
    if(usage<200)
    {
        bill=usage*1.20;
        printf("Net amount paid by the customer: %0.2f",bill);
    }
    if(usage>=200 && usage<400)
    {
        bill=usage*1.50;
        printf("Net amount paid by the customer: %0.2f",bill);
    }
    if(usage==400)
    {
        bill=usage*1.80;
        printf("Net amount paid by the customer: %0.2f",bill);
    }
    if(usage>400 && usage<600)
    {
        bill=usage*1.80;
        bill=bill+(bill*15/100);
        printf("Net amount paid by the customer: %0.2f",bill);
    }
    if(usage>=600)
    {
        bill=usage*2.00;
        bill=bill+(bill*15/100);
        printf("Net amount paid by the customer: %0.2f",bill);
    }
}
