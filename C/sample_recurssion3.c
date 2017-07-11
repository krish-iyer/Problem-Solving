#include<stdio.h>
int main()
{
  int a=abc(1);
  printf("%d\n",a);
  return 0;
}
void abc(int n)
{
  static int i=1;
  if(n>=5)
    return n;
    n=n+1;
    i++;
    return abc(n);
}
