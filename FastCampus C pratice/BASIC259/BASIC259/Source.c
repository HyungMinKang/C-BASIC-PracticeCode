#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;

int prime(int n)
{
	int i, dev=0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dev++;
	}

	if (dev == 2)
		return 1;
	else
		return 0;
}

int main(void)
{
	scanf("%d", &n);
	if (prime(n))
		printf("prime");
	else
		printf("composite");
	return 0;
}