#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int max = 0,count=0;
	int num;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
			count = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", count);
}