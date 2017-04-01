#include<stdio.h>
void disp(int[][3],int,int);
void sumall(int[][3],int,int);
void sumrow(int[][3],int,int);
void sumcol(int[][3],int,int);
void trans(int[][3],int,int);
int main()
{
	int i,j,m,n,ch;
	char c='y';
	printf("enter the value of m:");
	scanf("%d",&m);
	printf("enter the value of n:");
	scanf("%d",&n);	
	int a[m][n];
	printf("enter the first matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
        while(c=='y')
        {
		printf("Matrix operations menu\n1)display elemenets\n2)sum of all elements in an array\n3)display row-wise sum of matrix\n4)diplay sum column wise\n5)transpose of matrix\nEnter you choice: ");
		scanf("%d",&ch);

		if(ch==1)
			disp(a,m,n);
		else if(ch==2)
			sumall(a,m,n);
		else if(ch==3)
			sumrow(a,m,n);
		else if(ch==4)
			sumcol(a,m,n);
		else if(ch==5)
			trans(a,m,n);
		printf("Do you want to continue Y/N");
		scanf("%c",&c);
		scanf("%c",&c);
	
        }

	return 0;
}
void disp(int x[][3],int a,int b)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}
void sumall(int x[][3],int a,int b)
{
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+x[i][j];
		}
	}
	printf("%d",sum);
}
void sumrow(int x[][3],int a,int b)
{
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+x[i][j];
		}
		printf("%d",sum);
		sum=0;
	}
}
void sumcol(int x[][3],int a,int b)
{
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+x[j][i];
		}
		printf("%d",sum);
		sum=0;
	}
}
void trans(int x[][3],int a,int b)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",x[j][i]);
		}
		printf("\n");
	}
}




