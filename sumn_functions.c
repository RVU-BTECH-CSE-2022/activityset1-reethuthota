#include<stdio.h>
int input_size(char s[])
{
  int x;
  printf("enter %s",s);
  scanf("%d",&x);
  return x;
}

int input_ele(int size, int arr[size])
{
  for(int i=0;i<=size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

int sum_arr(int n, int arr[n])
{
int sum=0;
for(int i=0;i<=n;i++)
  {
    sum=sum+arr[i];
  }
return sum;
}

void output(int sum)
{
  printf("sum of elements of array is %d.\n",sum);
}

int main()
{
 int size=input_size("size of array:");
 int arr[size];
 arr[size]=input_ele(size,arr);
 int sum=sum_arr(size,arr);
 output(sum);
 return 0;
}