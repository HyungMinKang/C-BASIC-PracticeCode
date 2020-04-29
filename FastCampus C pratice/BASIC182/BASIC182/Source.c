#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[100][100];
	int n, m;
	scanf("%d %d", &n, &m);
	int num = 1;

	for (int i = m-1 ; i >= 0; i--)
	{
		for (int j = n-1; j >= 0; j--)
		{
			arr[j][i] = num;
			num++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}