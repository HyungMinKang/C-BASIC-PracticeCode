#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long int a,b;

	scanf("%lld %lld", &a, &b);

	printf("%lld \n", a + b);
	printf("%lld \n", a - b);
	printf("%lld \n", a * b);
	printf("%lld \n", a / b);
	printf("%lld \n", a % b);
	printf("%.2lf \n", (double)a/b);
	return 0;
}