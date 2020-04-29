#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int n;

int sqrt(long long int n)
{
	long long int i;
	for (i = 1; i * i <= n; i++);
	
	if (i * i > n)
		return i - 1;
	else
		return i;
}

int main(void)
{
	scanf("%lld", &n);
	printf("%d\n", sqrt(n));
	return 0;
}