#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[100][100];
int main(void)
{
	int i, j, n;
	scanf("%d", &n);
	int num = 1, k = n;
	arr[k][1] = num;
	for (k = n; k != 0; k--)
	{
		if (k % 2 != 0)
		{	
			
			for (i = 1; i <= n; i++)
			{

				num++;
				arr[k - i][i + 1] = num;
			}
		}

		else
		{
			for (i = 1; i <= n; i++)
			{	
				num++;
				arr[i + 1][k +2-i] = num;
			}
		}
	}


	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}