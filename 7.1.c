#include<stdio.h>
void equal(int[],int[],int);
int main()
{
	int a[10],b[10],i;
	printf("enter the first array");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("enter the second array");
	for(i=0;i<10;i++)
		scanf("%d",&b[i]);
	equal(a,b,10);
	return 0;
}
void equal(int x[],int y[],int i)
{
	int flag=0;
	for(int j=0;j<10;j++)
	{
		if(x[j]!=y[j])
		{
			flag=1;
			break;
		}
		else
		{
			flag=2;
		}
	}
	if(flag==1)
		printf("array's are not equal");
	else
		printf("array's are equal");
}
