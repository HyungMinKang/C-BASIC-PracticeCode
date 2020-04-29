#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int num)
{
	int j;
	int res=1;
	if (num == 1)
		res = 0;
	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
			res=0;
	}

	return res;
}



int main(void)
{
	int m, n;
	int i,count=0;
	int sum = 0, min = 100000;
	scanf("%d %d", &m, &n);

	for (i = m; i <= n; i++)
	{
		if (isPrime(i) )
		{	
			count++;
			sum += i;
			if (i < min)
				min = i;
		}
	}
	if (count == 0)
	{
		printf("-1");
		return 0;
	}
	printf("%d\n", sum);
	printf("%d", min);
	return 0;
}