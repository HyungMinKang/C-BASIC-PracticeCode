#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int n;

long long int f(long long int r)
{
	
	long long int flip = 0;
	
	while (n> 0)
	{
		flip *= 10;
		flip += (n % 10);
		n /= 10;
	}


	return flip;
}

int main()
{
	scanf("%lld", &n);
	printf("%lld \n", f(n));
	return 0;
}