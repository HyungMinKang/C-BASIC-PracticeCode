#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[10][10];

int main(void)
{
	int max = 0, max_i, max_j;
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				max_i = i + 1;
				max_j = j + 1;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", max_i, max_j);
	return 0;
}