#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int arr[101][101];
int main()
{
	int n;
	int x1, y1;
	int i, j;
	scanf("%d", &n);
	scanf("%d %d", &x1, &y1);
	

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			arr[i][j] = abs(x1 - i) + abs(y1 - j) + 1;
		}
	}


	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}