#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int sum=0;
	int min = 100;
	int i;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &num);
		if (num % 2 != 0)
		{
			sum += num;
			if (num < min)
				min = num;
		}
	}
	printf("%d\n", sum);
	printf("%d", min);
}