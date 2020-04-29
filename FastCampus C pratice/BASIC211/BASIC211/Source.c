#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[1100][1100];
int r[1100][1100];

int main(void)
{	
	
	int n, m, k;
	int sum = 0;
	int a, b, c, d, e;
	int g, h;
	scanf("%d %d %d", &n,&m, &k);
	
	for (int i = 1; i <= k; i++)
	{
		
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

		arr[a][b] = arr[a][b] + e;
		arr[c + 1][d + 1] = arr[c + 1][d + 1] + e;
		arr[a][d + 1] = arr[a][d + 1] - e;
		arr[c + 1][b] = arr[c + 1][b] -e;
		
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	for (g = 1; g <= n; g++)
	{


		if (g == 1)
		{
			for (h = 1; h<=m; h++)
			{

				sum = sum + arr[g][h];
				r[g][h] = sum;


			}

		}
		else
		{
			for (h= 1; h <= m; h++)
			{

				for (int k = 1; k <= g; k++)
				{
					sum = sum + arr[k][h];
				}

				r[g][h] = sum;
			}
		}
		sum = 0;
	}


	for (int g = 0; g <n; g++)
	{
		for (int j = 0; j <m; j++)
		{
			printf("%d ", r[g][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;

}