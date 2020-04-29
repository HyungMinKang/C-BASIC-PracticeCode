#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printodd(int a, int b)
{
	if (a > b)
		return;
	else
	{
		if (a % 2 != 0)
			printf("%d ", a);
		printodd(a+1, b);
	}
}

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printodd(a, b);
	return 0;
}