#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a >= b)
	{
		if (b >= c)
			printf("%d", b);
		else if (b <= c)
		{
			if (c >= a)
				printf("%d", a);
			else
				printf("%d", c);
		}
	}
	else
	{
		if (a >= c)
			printf("%d", a);
		else if (a <= c)
		{
			if (c >= b)
				printf("%d", b);
			else
				printf("%d", c);
		}
	}

	return 0;

}