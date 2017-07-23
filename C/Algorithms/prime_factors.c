#include<stdio.h>
int main()
{
  int num,i,j;
  printf("Enter the number: ");
  scanf("%d",&num);
  for(i=2;i<num;i++)
  {
    if(num%i==0)
    {
      for(j=2;j<=i;j++)
      {
        if(i%j==0)
        {
          break;
        }
      }
      if(i==j)
      {
        printf("%d\n",i);
      }
    }
  }
  return 0;
}
