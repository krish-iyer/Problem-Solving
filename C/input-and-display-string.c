#include<stdio.h>
int main()
{
  char string[500];
  printf("enter the string:");
  scanf("%[^\n]s",string);
  printf("the inputed string is: %s",string);
  return 0;
}
