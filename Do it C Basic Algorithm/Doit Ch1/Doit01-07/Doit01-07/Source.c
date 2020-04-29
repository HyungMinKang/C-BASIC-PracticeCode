#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int med(int a, int b, int c)
{
	if (a > b)
	{
		if (b > c)
			return b;
		else if (b == c)
			return b;
		else if (c > b)
		{
			if (a > c)
				return c;
			else if (c > a)
				return a;
			else
				return a;
		}

	}
	else if (a == b)
	{
		return a;
	}

	else
	{
		if (a > c)
			return a;
		else if (a == c)
			return a;
		else if (c > b)
			return b;
		else
			return c;
	}
}

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("Áß¾Ó°ª: %d", med(a, b, c));
	return 0;
}