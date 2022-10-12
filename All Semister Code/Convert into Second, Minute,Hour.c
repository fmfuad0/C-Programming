#include<stdio.h>
int main ()
{
  float s,m,h;
  printf("Enter value in seconds:");
  scanf("%f", &s);
  m=s/60;
  h=m/60;
  printf("Minutes:%0.1f Minute(s)\n Hour:%0.3f Hour(s)", m,h);
}
