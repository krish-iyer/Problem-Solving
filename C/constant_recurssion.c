#include<stdio.h>
int main()
{
  int a=abc(5);
  printf("%d\n",a);
  return 0;
}
int abc(int i)
{
  if(i==10)
  {
    return i;
  }
  else
  {
    return abc(abc(i+1));
  }
}
