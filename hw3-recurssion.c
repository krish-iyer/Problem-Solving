#include<stdio.h>
int main()
{
  int b=abc(4,3);
  printf("%d\n",b);
  return 0;
}
int abc(int x, int y)
{
  if(x==0)
  {
    return y;
  }
  else
  {
    return abc(x-1,x+y);
  }
}
