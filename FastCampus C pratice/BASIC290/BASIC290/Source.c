#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double abs(double x)
{
	if (x >= 0)
	{
		return x;
	}
	else
	{
		return x * -1;
	}

}

int main(void)
{
	double n;
	scanf("%lf", &n);
	
	if (n == (int)n)
	{
		printf("%d", (int)abs(n));
	}
	else
	{
		printf("%g", abs(n));
	}
}