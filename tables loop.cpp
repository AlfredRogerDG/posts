#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the table : ");
	scanf("%d",&a);
	printf("Enter the order limit : ");
	scanf("%d",&b);
	for (int i=1;i<=b;i++)
	{
		printf("%d * %d = %d\n",a,i,a*i);
	}
	return 0;
}
