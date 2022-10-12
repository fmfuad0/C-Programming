//Take temperature in degree Celcius from user.
//Convert it into Fahrenheit.
#include<stdio.h>
int main ()
{
  float c,f;
  printf("Enter temperature in degree celcius:");
  scanf("%f", &c);
  f=(9*c+160)/5;
  printf("Temperature in Fahrenheit:%0.2f degree", f);
}


