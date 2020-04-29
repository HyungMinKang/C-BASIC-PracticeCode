#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, d, n;
	int i=1;
	scanf("%d %d %d", &a, &d, &n);
	while (1)
	{
		if (i == n)
		{
			printf("%d", a);
			break;
		}
		a += d;
		i++;
	}
	return 0;
}