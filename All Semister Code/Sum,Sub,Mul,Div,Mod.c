//Take 2 numbers from user.
//Find sum, subtraction, multiplication, division, modulus between the 2 numbers.
#include<stdio.h>
int main ()
{
  float a,b,sum,sub,mul,div,mod;
  printf("Enter 1st number:");
  scanf("%f", &a);
  printf("Enter 2nd number:");
  scanf("%f", &b);
  sum=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  mod=(int)a%(int)b;
  printf(" Sum=%0.2f\n Substraction=%0.2f\n Multiplication=%0.2f\n Division=%0.2f Modulus=%0.2f", sum,sub,mul,div,  mod);
}
