#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[11][11],i,j;
int main(void)
{
	int r, c, mine = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d %d", &r, &c);
	
	if (arr[r][c] == 1)
	{
		printf("-1");
		return 0;
	}
	else
	{
		for (i =1; i <= 9; i++)
		{
			for (j = 1; j <= 9; j++)
			{
				mine = arr[r - 1][c] + arr[r - 1][c - 1] + arr[r][c - 1] + arr[r + 1][c - 1] + arr[r + 1][c] + arr[r + 1][c + 1] + arr[r][c + 1] + arr[r - 1][c + 1];

			}
		}
	}

	printf("%d", mine);
}
