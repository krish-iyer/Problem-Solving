#include<stdio.h>
int main()
{
  int b=abc(4,3);
  printf("%d\n",b);
  return 0;
}
int abc(int x, int y)
{
  if(y==0)
  {
    return 0;
  }
  else
  {
    return x+abc(x,y-1);
  }
}
