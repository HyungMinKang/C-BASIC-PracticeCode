#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i ;
	int a[10001];
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);

	}
	for (i = n; i>=1; i--)
	{
		printf("%d ", a[i]);
	}

	return 0;
}