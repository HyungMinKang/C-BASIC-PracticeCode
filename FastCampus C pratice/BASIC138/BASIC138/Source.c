#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, n;
	int i;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	for (i = 1; i <n; i++)
	{
		a = (a * b) + c;
	}

	printf("%d", a);
}