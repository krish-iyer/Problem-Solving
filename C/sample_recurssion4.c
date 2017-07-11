#include<stdio.h>
int main()
{
  abc(4);
  return 0;
}
void abc(int x)
{
  if(x==0)
  {
    return;
  }
  else
  {
    printf("%d\n",x%2);
    abc(x/2);
  }
}
