#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a % 2 != 0)
	{
		if (b % 2 != 0)
		{
			printf("Ȧ��+Ȧ��=¦��");
		}
		else
		{
			printf("Ȧ��+¦��=Ȧ��");
		}
	}

	else
	{
		if (b % 2 != 0)
		{
			printf("¦��+Ȧ��=Ȧ��");
		}
		else
		{
			printf("¦��+¦��=¦��");
		}
	}
}