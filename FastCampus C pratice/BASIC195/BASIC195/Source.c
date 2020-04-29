#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[102][1102];
	int n, m, i, j, k;
	scanf("%d %d", &n, &m);
	int cnt = 0;

	for (i = 2; i <= m + n; i++)
	{

		for (j = 1; j <= m; j++)
		{
			for (k = 1; k <= n; k++)
			{
				if (j + k == i)
				{
					cnt++;
					arr[k][j] = cnt;
				}
			}
		}
	}


	for (i = n; i >= 1; i--)
	{
		for (j = m; j >= 1; j--)
		{
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}