#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;

long long int f(int n)
{
	long long int sum = 1;
	int i;
	for (i = 1; i <= n; i++)
		sum *= i;

	return sum;
}

int main()
{
	scanf("%d", &n);
	printf("%lld \n", f(n));
	return 0;
}