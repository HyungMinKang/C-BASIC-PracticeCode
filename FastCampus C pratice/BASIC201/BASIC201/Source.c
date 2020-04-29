#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[101];
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + a[i];
		printf("%d ", sum);
	}

	return 0;

}