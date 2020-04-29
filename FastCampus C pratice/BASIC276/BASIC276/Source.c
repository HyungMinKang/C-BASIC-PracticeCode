#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a, b;

int gcd(int a, int b)
{
	int i, gcd = 0;
	int n = (a < b) ? b : a;
	for (i = 1; i <= n; i++)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	return gcd;
}

int main()
{
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
}
