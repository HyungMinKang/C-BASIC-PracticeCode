#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m;
	int arr[101][101];
	int k[101][101];
	scanf("%d %d", &n, &m);
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	int sum = 0;
	for (i = 1; i <= n; i++)
	{	
		
		
		if (i == 1)
		{
			for (j = 1; j <= m; j++)
			{

				sum = sum + arr[i][j];
				k[i][j] = sum;

					
			}
			
		}
		else
		{
			for (j = 1; j <= m; j++)
			{

				for (int k = 1; k <= i; k++)
				{
					sum = sum + arr[k][j];
				}

				k[i][j] = sum;
			}
		}
		sum = 0;
	}
	

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= m ;j++)
		{
			printf("%d ", k[i][j]);
		}
		printf("\n");
	}
	
}