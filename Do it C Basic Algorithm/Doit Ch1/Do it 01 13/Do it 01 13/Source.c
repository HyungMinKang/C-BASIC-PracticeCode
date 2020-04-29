#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sumof(int a, int b)
{	
	int i;
	int sum = 0;
	if (a > b)
	{
		for (i = b; i <= a; i++)
		{
			sum += i;
		}
	}
	else
	{
		for (i = a; i <= b; i++)
		{
			sum += i;
		}
		
	}
	return sum;
}

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", sumof(a, b));
}