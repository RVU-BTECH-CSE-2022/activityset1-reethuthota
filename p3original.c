#include<stdio.h>
int main(void)
{
  int primeno=0;
  int x=0;
  int i=2;
  int j=2;

  for (i=2;i<=100;i++)
  {
    primeno=0;
    for(j=2;j<=i/2;j++)
      {
        x=i%j;
        if(x==0)
        {
          primeno=1;
          break;
        }
      }
    if(primeno==0)
    {
      printf("%d\n",i);
    }
  }
}
