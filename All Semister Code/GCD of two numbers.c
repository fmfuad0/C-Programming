#include<stdio.h>
int main()
{
  int x,y,i,gcd,lcm;
  printf("Enter value of x:");
  scanf("%d",&x);
  printf("Enter value of y:");
  scanf("%d",&y);
  for(i=1;i<=x && i<=y;i++)
  {
    if(x%i==0 && y%i==0)
      gcd=i;
  }
  printf("GCD of %d and %d is= %d\n",x,y,gcd);
  lcm=(x*y)/gcd;
  printf("LCM of %d and %d is= %d",x,y,lcm);
}
