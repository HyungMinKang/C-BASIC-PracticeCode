#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m, a, b;
	scanf("%d", &n);
	scanf("%d", &m);
	a = (n + m) / 2;
	b = n - a;
	printf("%d\n", a);
	printf("%d", b);
}