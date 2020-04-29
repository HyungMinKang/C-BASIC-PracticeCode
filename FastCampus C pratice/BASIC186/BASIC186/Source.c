#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[101][101];
	int n;
	scanf("%d", &n);
	int num = 1;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 1; j <= n; j++)
			{
				arr[j][i] = num;
				num++;
			}
		}
		else
		{
			for (int j = n; j >= 1; j--)
			{
				arr[j][i] = num;
				num++;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}