//enter the amount in dollars
//display the amount by adding 18% as tax.
#include<stdio.h>
int main ()
{
  float amount,value;
  printf("Enter amount is dollar:$");
  scanf("%f", &amount);
  value=(amount+(amount*0.18));
  printf("Value with tax is $%0.2f", value);
}
