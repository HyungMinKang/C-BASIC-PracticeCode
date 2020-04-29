#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	if ((n % 2) == 0)
	{
		sum = (n + 1) * (n / 2);
		printf("%d", sum);
	}
	else
	{
		sum= ((n ) * (n/2))+ n;
		printf("%d", sum);
	}

	return 0;
	
}