#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, res[7],j,i=0, ri=0, sum=0;
	scanf("%d", &n);
	while (n)
	{
		res[i] = n % 10;
		n = n / 10;
		i++;
	}
	while (1)
	{
		if (res[ri] == 0)
		{
			for (j = 0; j < i-1; j++)
			{
				res[j] = res[j + 1];
			}
			i--;
		}
		else {
			break;
		}
	}
	for (ri = 0; ri < i; ri++)
	{
		printf("%d", res[ri]);
		sum += res[ri];
	}

	putchar('\n');
	printf("%d", sum);

	return 0;
}


/* 모범코드
#include <stdio.h>
int main()
{
	int n, sum = 0, reverseN = 0;
	scanf("%d", &n);

	while(n != 0)
	{
		reverseN = reverseN * 10 + n % 10;
		sum += n % 10;
		n /= 10;
	}

	printf("%d\n%d", reverseN, sum);
	return 0;

*/