#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 || i % 6 == 0 || i % 9 == 0)
			printf("%c ", 'X');
		else
			printf("%d ", i);
	}

	return 0;
}