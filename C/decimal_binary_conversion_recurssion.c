#include<stdio.h>
void binary(int);
int main()
{
  int n;
  printf("enter the no:");
  scanf("%d",&n);
  binary(n);
  return 0;
}
void binary(int num)
{
  int n=num;
  static int i=0;
  int a[n];
  if(num!=0)
  {
    a[i]=num%2;
    num=num/2;
    i++;
    binary(num);
  }
  for(int j=0;j<i;j++)
    printf("%d",a[j]);
}
