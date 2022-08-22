#include<stdio.h>
int main(void)
{
  float base, altitude, area;
  printf("Enter base and altitude\n");
  scanf("%f%f",&base,&altitude);
  area=0.5 * base * altitude;
  printf("the area of triangle with base = %f and altitude = %f is %f\n",base, altitude, area);
  return 0;
}
