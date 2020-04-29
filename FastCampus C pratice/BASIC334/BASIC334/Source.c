#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main(void)
{
	int a, b;
	int gd;
	scanf("%d %d", &a, &b);
	printf("%d\n", gcd(a, b));
	printf("%d", (a * b) / gcd(a, b));
	return 0;
}