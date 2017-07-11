#include<stdio.h>
int main()
{
  char string[500];
  printf("enter the string:");
  fgets(string,500,stdin);
  puts(string);
  return 0;
}
