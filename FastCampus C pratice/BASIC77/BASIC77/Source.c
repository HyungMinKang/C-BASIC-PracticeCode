#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i=1, sum = 0;
	scanf("%d", &n);
	while (1)
	{
		sum += i;
		if (sum >= n)
			break;
		i++;
	}
	printf("%d", sum);
}