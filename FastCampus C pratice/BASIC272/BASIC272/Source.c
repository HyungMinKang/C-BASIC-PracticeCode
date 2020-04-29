#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int n, m;

long long int f(long long int n, long long int m)
{
	return (long long int) (n > m ? n - m: m-n);
}

int main()
{
	scanf("%lld%lld", &n, &m);
	printf("%lld\n", f(n, m));

	return 0;
}