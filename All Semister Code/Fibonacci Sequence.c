#include<stdio.h>
int main()
{
  int a,b,c,n,i;
  printf("Enter the last position of the sequence:");
  scanf("%d",&n);
  a=1;b=1;c=1;
  printf("0..",i,c);
  printf("1..",i,c);
  for(i=3;i<=n;i++)
  {
    a=b;
    b=c;
    c=a+b;
    printf("%d..",c);
  }
}
