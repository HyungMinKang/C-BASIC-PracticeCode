#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[101][101];
	int n, m;
	int i, j;
	scanf("%d %d", &n, &m);
	int num = 1;

	for (i = n; i > 0; i--)
	{

		if (n % 2 == 0)
		{

			if (i % 2 != 0)
			{
				for (j = m; j >= 1; j--)
				{
					arr[i][j] = num;
					num++;
				}
			}


			else if (i % 2 == 0)
			{
				for (j = 1; j <= m; j++)
				{
					arr[i][j] = num;
					num++;
				}
			}

		}


		else if (n % 2 != 0)
		{
			if (i % 2 == 0)
			{
				for (j = m; j >= 1; j--)
				{
					arr[i][j] = num;
					num++;
				}
			}


			else if (i % 2 != 0)
			{
				for (j = 1; j <= m; j++)
				{
					arr[i][j] = num;
					num++;
				}
			}
		}



	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}