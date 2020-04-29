#include<stdio.h>

int PrimeNumber(int num) // 소수판단 함수
{
	int i, j=0;
	
	for (i = 1; i <=num; i++)
	{
		if (num % i == 0)
			j++;
	}
	if (j == 2)
		return 1;

	return 0;
}

int main(void)
{
	int i = 2, cnt = 0;

	while (cnt != 10)
	{
		if (PrimeNumber(i) == 1)
		{
			printf("%d ", i);
			cnt++;
		}
		i++;
	}
	return 0;
}
