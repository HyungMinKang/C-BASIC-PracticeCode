#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[5001];

int isselnum(int i)
{
	int res = i;
	if (i >= 1000)
	{
		res += i/ 1000, i %= 1000;
	}
	if (i >= 100)
	{
		res += i / 100, i %= 100;
	}
	if (i >= 10)
	{
		res += i / 10; i %= 10;
	}
	return res += i;
}

int main()
{
	int i, sum=0;
	int x, y;
	scanf("%d %d", &x, &y);
	for (i = 1; i <= y; i++)
	{
		a[isselnum(i)] = 1;
	}

	for (i = x; i <=y; i++)
	{
		if (a[i] == 0)
		{
			sum += i;
		}
	}

	printf("%d", sum);
}