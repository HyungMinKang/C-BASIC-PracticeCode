#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[100][100];
	int n,m;
	scanf("%d %d", &n,&m);
	int num = 1;

	for (int i = n-1; i >=0 ; i--)
	{
		for (int j = 0; j <m; j++)
		{
			arr[i][j] = num;
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