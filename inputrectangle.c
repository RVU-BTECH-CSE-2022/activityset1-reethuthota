#include<stdio.h>
int main(void)
{
  float base, height, area;
  printf("Enter base and height\n");
  scanf("%f%f",&base,&height);
  area=base * height;
  printf("the area of rectangle with base = %f and height = %f is %f\n",base, height, area);
  return 0;
}
