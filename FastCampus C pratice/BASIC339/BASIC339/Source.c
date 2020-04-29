#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPerfectSquare(int num)
{
	int i;
	int res=0;
	for (i = 1; i <= 100; i++)
	{
		if (i * i == num)
		{
			res = i;
			return res;
		}
	}
	return res;
}



int main(void)
{	
	int i, sum = 0, min = 10001;
	int n, m;
	scanf("%d %d", &n, &m);
	for (i = n; i <= m; i++)
	{
		if (isPerfectSquare(i))
		{
			sum += i;
			if (i < min)
			{
				min = i;
			}
		}
	}
	printf("%d\n", sum);
	printf("%d", min);
	return 0;
}