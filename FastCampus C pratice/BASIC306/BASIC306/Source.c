#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", fibonacci(n));
	return 0;
}