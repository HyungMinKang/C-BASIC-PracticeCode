#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, t;
	int a[24] = { 0 };
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		a[t] = a[t] + 1;
	}

	for (i = 1; i <= 23; i++)
	{
		printf("%d ", a[i]);
	}
}