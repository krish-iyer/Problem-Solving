#include<stdio.h>
int main()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  int b=abc(a);
  printf("%d\n",b);
  return 0;
}
int abc(int i)
{
  if(i==1)
  {
    return 2;
  }
  else
  {
    return 2 * abc(i-1);
  }
}
