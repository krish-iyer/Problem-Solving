#include<stdio.h>
int main()
{
	int i=0;
	char a[7];
	while(a[i]!='\0'){
		scanf("%c",&a[i]);
		i++;
	}
	printf("%c %c",a[0],a[5]);
	return 0;
}
