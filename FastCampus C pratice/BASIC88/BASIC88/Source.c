#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h, w, n, l, d, x, y,i,j;
	int arr[100][100] = { 0 };
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 0)
		{
			for (j = 0; j < l; j++)
			{
				arr[x][y + j] = 1;
			}
		}
		else
		{
			for (j = 0; j < l; j++)
			{
				arr[x + j][y] = 1;
			}
		}
	}

	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= w; j++)
		{
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
	
}