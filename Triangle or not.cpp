#include<stdio.h>
int main()
{
	int side1, side2, side3;
	printf("Enter side 1 :");
	scanf("%d",&side1);
	printf("Enter side 2 :");
	scanf("%d",&side2);
	printf("Enter side 3 :");
	scanf("%d",&side3);
	if ((side1+side2>side3)&&(side1+side3>side2)&&(side2+side3>side1))
	{
		if((side1==side2)&&(side1==side3))
		{
			printf("Its an equilateral triangle.");
		}
		else if ((side1==side2)||(side2==side3)||(side3==side1))
		{
			printf("Its an isoceles triangle. ");
		}
		else
		{
			printf("Its a scalene triangle.");
		}
	}
	else
	{
		printf("It is not a triangle.");
	}
	return 0;
}
