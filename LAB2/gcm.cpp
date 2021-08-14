#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x,y;
	int n;
	int a=1;
	printf("Enter first number : ");
	scanf("%d", &x);
	printf("Enter second number : ");
	scanf("%d", &y);
	if (x>=y)
	{
		for (n=2;n<=y;n++)
		{
			if (y%n==0 && x%n==0)
			{
				y = y / n;
				a=a*n;
			}
		}
	}
	else
	{
		for (n=2;n<=x;n++)
		{
			if (x%n==0 && y%n==0)
			{
				y = y / n;
				a=a*n;
			}
		}
	}
	printf("Greatest common divisor = ");
	printf("%d", a);
}