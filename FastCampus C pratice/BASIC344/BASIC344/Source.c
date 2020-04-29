#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int div[100001];

int main(void)
{	
	int i;
	int n, k;
	int cnt = 0;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			div[i] = i;
		}
	}

	for (i = 1; i <= n; i++)
	{
		if (div[i])
		{
			cnt++;
		}
		if (cnt == k)
		{
			printf("%d", i);
			return 0;
		}
	}
	
	printf("%d", 0);
	return 0;
}