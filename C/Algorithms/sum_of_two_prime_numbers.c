#include<stdio.h>
int main()
{
  int num,i,j,k=0;
  printf("Enter the number: ");
  scanf("%d",&num);
  int a[num];
  for(i=2;i<num;i++)
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
        a[k]=i;
        k++;
      }
  }
  for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
    {
      if(a[i]+a[j]==num)
      {
        printf("%d %d",a[i],a[j]);
        return 0;
      }
    }
  }
}
