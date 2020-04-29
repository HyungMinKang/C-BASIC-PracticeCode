#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, r, n;
	int i = 1;
	scanf("%d %d %d", &a, &r, &n);
	while (1)
	{
		if (i == n)
		{
			printf("%d", a);
			break;
		}
		a *= r;
		i++;
	}

	return 0;
}