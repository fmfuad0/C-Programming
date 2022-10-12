#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter last number of the series:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("Sum is %d",sum);

}
