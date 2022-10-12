//Find the linear distance between two points in a cartesian coordinate system.
#include<stdio.h>
#include<math.h>
int main ()
{
  float x1,x2,y1,y2,distance;
  printf("Enter the value of x1:");
  scanf("%f", &x1);
  printf("Enter the value of y1:");
  scanf("%f", &y1);
  printf("Enter the value of x2:");
  scanf("%f", &x2);
  printf("Enter the value of y2:");
  scanf("%f", &y2);
  distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf("The distance is %0.3f Unit(s)", distance);
}
