#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[21][21];
int main(void)
{
	int n, i, j=2;
	scanf("%d", &n);
	for (i = 1; i <=n; i++)
	{
		scanf("%d", &a[i][1]);
		j = 2;
		while (j<=i)
		{
			if (i == 1)
				break;

			a[i][j] = (a[i][j - 1]) - (a[i - 1][j - 1]);
			j++;
		}
	
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i >= j)
			{
				printf("%d ", a[i][j]);
			}
		}
		printf("\n");
	}

	
	
}