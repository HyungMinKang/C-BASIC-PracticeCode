#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int n;

long long int abs(long long int n)
{
	if (n < 0)
		return n * -1;
	else
		return n;
}

int main()
{
	scanf("%lld", &n);
	printf("%lld \n", abs(n));
	return 0;
}