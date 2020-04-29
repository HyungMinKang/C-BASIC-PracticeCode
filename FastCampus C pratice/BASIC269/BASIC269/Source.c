#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;

int f(int n)
{
	int div = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			div++;
	}


	return div;
}

int main()
{
	scanf("%d", &n);
	printf("%d \n", f(n));
	return 0;
}