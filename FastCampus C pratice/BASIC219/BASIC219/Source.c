#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[50][50];
	int n, i, j;
	int num = 1;
	scanf("%d", &n);


	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			for (j = 1; j <= n; j++)
			{
				a[j][i] = num;
				num++;
			}
		}

		else
		{
			for (j = n; j >= 1; j--)
			{
				a[j][i] = num;
				num++;
			}
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}