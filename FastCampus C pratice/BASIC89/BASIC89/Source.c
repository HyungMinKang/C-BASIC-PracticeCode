#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[11][11];
	int  x = 2,  y = 2;
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}


	
	while (arr[x][y] != 2)
	{
		arr[x][y] = 9;


		if (arr[x][y + 1] != 1)y += 1;
		else if (arr[x + 1][y] != 1)x += 1;
		else break;
	}

	arr[x][y] = 9;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}